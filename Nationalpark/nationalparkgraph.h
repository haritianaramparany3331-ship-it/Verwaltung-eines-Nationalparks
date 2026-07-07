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
    std::vector<Wege> getKanten() const;
    std::map<int, std::vector<size_t>> getAdjacencyList() const;
    void ladeOrte();
    void ladeWege();
    void baueAdjacencyList();
    const Orte* findeOrt(int id) const;
    Wege* findeWeg(int start, int ziel);
};

#endif // NATIONALPARKGRAPH_H
