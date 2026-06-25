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
    std::string getBezeichnung() const { return m_bezeichnung; }
    bool istGefaehrdet() const { return m_gefaehrdet; }
    bool istRaubtier() const { return m_raubtier; }
    int getAnzahl() const { return m_anzahl; }
    int getAlter() const { return m_alter; }
    void setAnzahl(int &anzahl);
    virtual json toJson() const;
    //virtual void display() = 0;
    virtual std::string getInfo() = 0;
    virtual void ausgabeTooltip(std::ostream &os) const;
};

#endif // SPEZIES_H
