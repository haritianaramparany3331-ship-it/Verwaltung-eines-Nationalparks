#include "nationalparkgraph.h"
#include <fstream>
#include <set>
#include <queue>
#include <limits>

std::vector<Orte> NationalparkGraph::getKnoten() const{
    return knoten;
}

const std::vector<Wege> &NationalparkGraph::getKanten() const{
    return kanten;
}

std::map<int, std::vector<size_t>> NationalparkGraph::getAdjacencyList() const{
    return adjacencyList;
}

void NationalparkGraph::ladeOrte(){
    std::ifstream in("orte.json");
    if (!in) return;
    knoten.clear();
    json j;
    in >> j;
    for (const auto &knote : j.at("orte")){
        knoten.push_back(Orte::fromJson(knote));
    }
    baueAdjacencyList();
    in.close();
}

void NationalparkGraph::ladeWege(){
    std::ifstream in("wege.json");
    if (!in) return;
    kanten.clear();
    json j;
    in >> j;
    for (const auto &kante : j.at("wege")){
        kanten.push_back(Wege::fromJson(kante));
    }
    baueAdjacencyList();
    in.close();
}

void NationalparkGraph::baueAdjacencyList(){
    adjacencyList.clear();
    for (size_t i = 0; i<kanten.size(); i++){
        adjacencyList[kanten[i].getStart()].push_back(i);
        adjacencyList[kanten[i].getZiel()].push_back(i);
    }
}

const Orte* NationalparkGraph::findeOrt(int id) const{
    for (const auto &ort : knoten){
        if (ort.getId() == id){
            return &ort;
        }
    }
    return nullptr;
}

Wege* NationalparkGraph::findeWeg(int start, int ziel){
    for (auto &weg : kanten){
        if ((weg.getStart() == start && weg.getZiel() == ziel) ||
            (weg.getStart() == ziel && weg.getZiel() == start)){
            return &weg;
        }
    }
    return nullptr;
}

void NationalparkGraph::wegSperren(int start, int ziel){
    Wege *weg = findeWeg(start, ziel);
    if (weg != nullptr){
        weg->setGesperrt(true);
    }
}

void NationalparkGraph::wegEntsperren(int start, int ziel){
    Wege *weg = findeWeg(start, ziel);
    if (weg != nullptr){
        weg->setGesperrt(false);
    }
}

std::vector<int> NationalparkGraph::bfsFrom(int start) const{
    std::vector<int> erreichbareOrte;
    std::set<int> visited;
    std::queue<int> warteliste;
    visited.insert(start);
    warteliste.push(start);

    while (!warteliste.empty()){
        int aktuellerOrt = warteliste.front();
        warteliste.pop();
        erreichbareOrte.push_back(aktuellerOrt);
        auto it = adjacencyList.find(aktuellerOrt);
        if (it == adjacencyList.end()) continue;
        for (size_t wegIndex : it->second){
            const Wege &weg = kanten[wegIndex];
            if (weg.istGesperrt()) continue;
            int nachbarn = weg.gegenueberliegenderOrt(aktuellerOrt);
            if (visited.find(nachbarn) == visited.end()){
                visited.insert(nachbarn);
                warteliste.push(nachbarn);
            }
        }
    }

    return erreichbareOrte;
}

NationalparkGraph::DijkstraErgebnis NationalparkGraph::kuerzesterWeg(int start, int ziel) const{
    DijkstraErgebnis ergebnis;
    std::map<int, double> distanz;
    std::map<int, int> vorgaenger;
    std::set<int> besucht;

    for (const auto &ort : knoten){
        distanz[ort.getId()] = std::numeric_limits<double>::infinity();
    }
    distanz[start] = 0.0;
    typedef std::pair<double, int> Edge;
    std::priority_queue<Edge, std::vector<Edge>, std::greater<Edge>> Q;
    Q.push(std::make_pair(0.0, start));

    while (!Q.empty()){
        double aktuelleDistanz = Q.top().first;
        int aktuellerOrt = Q.top().second;
        Q.pop();

        if (besucht.count(aktuellerOrt)>0) continue;
        besucht.insert(aktuellerOrt);

        if (aktuellerOrt == ziel) break;

        auto it = adjacencyList.find(aktuellerOrt);
        if (it == adjacencyList.end()) continue;
        for (std::size_t wegIndex : it->second){
            const auto &weg = kanten[wegIndex];
            if (weg.istGesperrt()) continue;
            int nachbarn = weg.gegenueberliegenderOrt(aktuellerOrt);
            double neueDistanz = aktuelleDistanz + weg.getLaenge();
            if (neueDistanz < distanz[nachbarn]){
                distanz[nachbarn] = neueDistanz;
                vorgaenger[nachbarn] = aktuellerOrt;
                Q.push(std::make_pair(neueDistanz, nachbarn));
            }
        }
    }

    if (distanz[ziel] == std::numeric_limits<double>::infinity()){
        ergebnis.erreichbar = false;
        return ergebnis;
    }
    std::vector<int> res;
    int aktuellerOrt = ziel;
    res.push_back(aktuellerOrt);
    while (aktuellerOrt != start){
        aktuellerOrt = vorgaenger.at(aktuellerOrt);
        res.push_back(aktuellerOrt);
    }
    std::reverse(res.begin(), res.end());
    ergebnis.erreichbar = true;
    ergebnis.gesamtDistanz = distanz.at(ziel);
    ergebnis.pfad = res;
    return ergebnis;
}
