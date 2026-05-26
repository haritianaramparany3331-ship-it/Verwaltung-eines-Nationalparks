#ifndef VERWALTUNG_H
#define VERWALTUNG_H
#include "angestellter.h"

class Verwaltung : public Angestellter
{
private:
    std::string m_abteilung;
    std::string m_buero;
public:
    Verwaltung(std::string nachname,
               std::string vorname,
               int personalnummer,
               int stundenzahl,
               double gehalt,
               std::string abteilung,
               std::string buero) :
        Angestellter(nachname,
                     vorname,
                     personalnummer,
                     stundenzahl,
                     gehalt),
        m_abteilung(abteilung),
        m_buero(buero){};

    std::string getInfo() override;
    void serialize(std::ofstream &out) override;
};

#endif // VERWALTUNG_H
