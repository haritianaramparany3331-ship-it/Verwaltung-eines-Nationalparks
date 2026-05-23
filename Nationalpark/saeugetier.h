#ifndef SAEUGETIER_H
#define SAEUGETIER_H
#include "spezies.h"

class Saeugetier : public Spezies
{
private:
    //bool m_rudelTier;
    //int m_tragzeit;
    //double m_durschnittsgewicht;
    std::string m_fellfarbe;
public:
    Saeugetier(std::string bezeichnung,
               //bool gefaehrdet,
               //bool raubtier,
               int alter,
               //bool rudelTier,
               //int tragzeit,
               //double durschnittsgewicht,
               std::string fellfarbe)
        : Spezies(bezeichnung,
                  //gefaehrdet,
                  //raubtier,
                  alter),
        m_fellfarbe(fellfarbe)
        //m_rudelTier(rudelTier),
        //m_tragzeit(tragzeit),
        //m_durschnittsgewicht(durschnittsgewicht)
    {};
    ~Saeugetier(){};
    void serialize(std::ofstream &out) override;
    static Spezies* deserialize(std::ifstream &in,
                                std::string &bezeichnung,
                                //bool &gefaehrdet,
                                //bool &raubtier,
                                int &alter);
    //void display() override;
};

#endif // SAEUGETIER_H
