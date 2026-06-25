#ifndef TIERLISTE_H
#define TIERLISTE_H
#include "spezies.h"
#include <vector>
#include "tierstatistik.h"

class Tierliste
{
private:
    std::vector<Spezies*> fauna;
public:
    Tierliste(){};
    ~Tierliste(){};
    void insertAnimal(Spezies* animal);
    //void printInfoOfAllAnimals();
    int sizeList();
    void tierJsonSpeichern();
    void tierJsonLaden();
    //void testDateiErzeugen();
    std::vector<Spezies*> &getFauna();
    TierStatistik berechneStatistik() const;
};

#endif // TIERLISTE_H
