#ifndef ANGESTELLTER_H
#define ANGESTELLTER_H
#include <iostream>
#include <json.hpp>

using namespace nlohmann;

class Angestellter
{
protected:
    std::string m_nachname;
    std::string m_vorname;
    int m_personalnummer;
    int m_stundenzahl;
    double m_gehalt;
public:
    Angestellter(std::string nachname,
                 std::string vorname,
                 int personalnummer,
                 int stundenzahl,
                 double gehalt) :
        m_nachname(nachname),
        m_vorname(vorname),
        m_personalnummer(personalnummer),
        m_stundenzahl(stundenzahl),
        m_gehalt(gehalt){};
    virtual ~Angestellter(){};
    std::string getNachname() const { return m_nachname; }
    std::string getVorname() const { return m_vorname; }
    int getPersonalnummer() const { return m_personalnummer; }
    int getStundenzahl() const { return m_stundenzahl; }
    double getGehalt() const { return m_gehalt; }

    virtual std::string getInfo() = 0;
    virtual json toJson() const;
    virtual void ausgabeTooltip(std::ostream &os) const;
};

#endif // ANGESTELLTER_H
