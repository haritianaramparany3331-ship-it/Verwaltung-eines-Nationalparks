#ifndef TIERLISTE_H
#define TIERLISTE_H
#include "spezies.h"
#include <vector>

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
};

#endif // TIERLISTE_H
