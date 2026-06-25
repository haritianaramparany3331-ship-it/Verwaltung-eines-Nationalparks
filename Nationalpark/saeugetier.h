#ifndef SAEUGETIER_H
#define SAEUGETIER_H
#include "spezies.h"

class Saeugetier : public Spezies
{
private:
    bool m_rudelTier;
    int m_tragzeit;
    double m_durschnittsgewicht;
    std::string m_fellfarbe;
public:
    Saeugetier(std::string bezeichnung,
               bool gefaehrdet,
               bool raubtier,
               int anzahl,
               int alter,
               bool rudelTier,
               int tragzeit,
               double durschnittsgewicht,
               std::string fellfarbe
               )
        : Spezies(bezeichnung,
                  gefaehrdet,
                  raubtier,
                  anzahl,
                  alter),
        m_rudelTier(rudelTier),
        m_tragzeit(tragzeit),
        m_durschnittsgewicht(durschnittsgewicht),
        m_fellfarbe(fellfarbe)
    {};
    ~Saeugetier(){};
    bool istRudeltier() const { return m_rudelTier; }
    int getTragzeit() const { return m_tragzeit; }
    double getDurchschnittsgewicht() const { return m_durschnittsgewicht; }
    std::string getFellfarbe() const { return m_fellfarbe; }
    json toJson() const override;
    //void display() override;
    std::string getInfo() override;
    void ausgabeTooltip(std::ostream &os) const override;
};

#endif // SAEUGETIER_H
