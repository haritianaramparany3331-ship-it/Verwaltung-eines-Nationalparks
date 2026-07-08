#ifndef NATIONALPARKGRAPH_H
#define NATIONALPARKGRAPH_H

#include <vector>
#include <map>
#include "orte.h"
#include "wege.h"

class NationalparkGraph
{
private:
    std::vector<Orte> knoten;
    std::vector<Wege> kanten;
    std::map<int, std::vector<size_t>> adjacencyList;
public:
    NationalparkGraph() = default;
    std::vector<Orte> getKnoten() const;
    const std::vector<Wege> &getKanten() const;
    std::map<int, std::vector<size_t>> getAdjacencyList() const;
    void ladeOrte();
    void ladeWege();
    void baueAdjacencyList();
    const Orte* findeOrt(int id) const;
    Wege* findeWeg(int start, int ziel);
    void wegSperren(int start, int ziel);
    void wegEntsperren(int start, int ziel);
    std::vector<int> bfsFrom(int start) const;

    struct DijkstraErgebnis{
        bool erreichbar = false;
        double gesamtDistanz = 0.0;
        std::vector<int> pfad;
    };
    DijkstraErgebnis kuerzesterWeg(int start, int ziel) const;
};

#endif // NATIONALPARKGRAPH_H
