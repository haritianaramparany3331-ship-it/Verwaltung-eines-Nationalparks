#ifndef VOGEL_H
#define VOGEL_H
#include "spezies.h"

class Vogel : public Spezies
{
private:
    //bool m_zugvogel;
    //double m_flugreichweite;
    double m_fluegelspannweite;
public:
    Vogel(std::string bezeichnung,
          //bool gefaehrdet,
          //bool raubtier,
          int alter,
          //bool zugvogel,
          //double flugreichweite,
          bool fluegelspannweite)
        : Spezies(bezeichnung,
                  //gefaehrdet,
                  //raubtier,
                  alter),
        //m_zugvogel(zugvogel),
        //m_flugreichweite(flugreichweite),
        m_fluegelspannweite(fluegelspannweite){};
    ~Vogel(){};
    void serialize(std::ofstream &out) override;
    static Spezies* deserialize(std::ifstream &in,
                                std::string &bezeichnung,
                                //bool &gefaehrdet,
                                //bool &raubtier,
                                int &alter);
    //void display() override;
};

#endif // VOGEL_H
