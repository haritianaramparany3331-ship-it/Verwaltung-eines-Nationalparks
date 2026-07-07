#include "nationalparkgraph.h"
#include <fstream>

std::vector<Orte> NationalparkGraph::getKnoten() const{
    return knoten;
}

std::vector<Wege> NationalparkGraph::getKanten() const{
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
