#ifndef ANGESTELLTER_H
#define ANGESTELLTER_H
#include <iostream>

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

    virtual std::string getInfo() = 0;
    virtual void serialize(std::ofstream &out) = 0;
};

#endif // ANGESTELLTER_H
