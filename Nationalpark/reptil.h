#ifndef REPTIL_H
#define REPTIL_H
#include "spezies.h"

class Reptil : public Spezies
{
private:
    bool m_giftig;
    //double m_optimaleTemperatur;
    //bool m_wechselwarm;
public:
    Reptil(std::string bezeichnung,
           //bool gefaehrdet,
           //bool raubtier,
           int alter,
           bool giftig)
           //double optimaleTemperatur,
           //bool wechselwarm)
        : Spezies(bezeichnung,
                  //gefaehrdet,
                  //raubtier,
                  alter),
        m_giftig(giftig)
        //m_optimaleTemperatur(optimaleTemperatur),
        //m_wechselwarm(wechselwarm)
    {};
    ~Reptil(){};
    void serialize(std::ofstream &out) override;
    static Spezies* deserialize(std::ifstream &in,
                                std::string &bezeichnung,
                                //bool &gefaehrdet,
                                //bool &raubtier,
                                int &alter);
    //void display() override;
};

#endif // REPTIL_H
