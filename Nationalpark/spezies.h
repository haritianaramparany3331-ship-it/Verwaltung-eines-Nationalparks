#ifndef SPEZIES_H
#define SPEZIES_H
#include <iostream>
#include <json.hpp>

using namespace nlohmann;

class Spezies
{
protected:
    std::string m_bezeichnung;
    bool m_gefaehrdet;
    bool m_raubtier;
    int m_anzahl;
    int m_alter;
public:
    Spezies(std::string bezeichnung,
            bool gefaehrdet,
            bool raubtier,
            int anzahl,
            int alter
            )
        : m_bezeichnung(bezeichnung),
        m_gefaehrdet(gefaehrdet),
        m_raubtier(raubtier),
        m_anzahl(anzahl),
        m_alter(alter)
    {};
    virtual ~Spezies(){};
    void setAnzahl(int &anzahl);
    int getAnzahl();
    virtual json toJson() const;
    //virtual void display() = 0;
    std::string getBezeichnung() const;
    int getAlter() const;
    virtual std::string getInfo() = 0;
};

#endif // SPEZIES_H
