#ifndef REPTIL_H
#define REPTIL_H
#include "spezies.h"

class Reptil : public Spezies
{
private:
    bool m_giftig;
    double m_optimaleTemperatur;
    bool m_wechselwarm;
public:
    Reptil(std::string bezeichnung,
           bool gefaehrdet,
           bool raubtier,
           int anzahl,
           int alter,
           bool giftig,
           double optimaleTemperatur,
           bool wechselwarm)
        : Spezies(bezeichnung,
                  gefaehrdet,
                  raubtier,
                  anzahl,
                  alter),
        m_giftig(giftig),
        m_optimaleTemperatur(optimaleTemperatur),
        m_wechselwarm(wechselwarm)
    {};
    ~Reptil(){};
    json toJson() const override;
    //void display() override;
    std::string getInfo() override;
};

#endif // REPTIL_H
