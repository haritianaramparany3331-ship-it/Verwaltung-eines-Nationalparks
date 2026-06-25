#ifndef PERSONALLISTE_H
#define PERSONALLISTE_H
#include "angestellter.h"
#include <vector>
#include "personalstatistik.h"

class Personalliste
{
private:
    std::vector<Angestellter*> personal;
public:
    Personalliste();
    void insertPersonal(Angestellter* angestellter);
    int sizePersonalList();
    std::vector<Angestellter*>& getPersonal();
    void personJsonSpeichern();
    void personJsonLaden();
    PersonalStatistik berechneStatistik() const;
};

#endif // PERSONALLISTE_H
