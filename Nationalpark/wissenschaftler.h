#ifndef WISSENSCHAFTLER_H
#define WISSENSCHAFTLER_H
#include "angestellter.h"

class Wissenschaftler : public Angestellter
{
private:
    std::string m_fachgebiet;
    int m_anzahlStudien;
public:
    Wissenschaftler(std::string nachname,
                    std::string vorname,
                    int personalnummer,
                    int stundenzahl,
                    double gehalt,
                    std::string fachgebiet,
                    int anzahlStudien) :
        Angestellter(nachname,
                       vorname,
                       personalnummer,
                       stundenzahl,
                       gehalt),
        m_fachgebiet(fachgebiet),
        m_anzahlStudien(anzahlStudien){};

    std::string getFachgebiet() const { return m_fachgebiet; }
    int getAnzahlStudien() const { return m_anzahlStudien; }

    std::string getInfo() override;
    json toJson() const override;
    void ausgabeTooltip(std::ostream &os) const override;
};

#endif // WISSENSCHAFTLER_H
