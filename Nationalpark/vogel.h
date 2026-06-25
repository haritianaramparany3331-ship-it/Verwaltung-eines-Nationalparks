#ifndef VOGEL_H
#define VOGEL_H
#include "spezies.h"

class Vogel : public Spezies
{
private:
    bool m_zugvogel;
    double m_flugreichweite;
    double m_fluegelspannweite;
public:
    Vogel(std::string bezeichnung,
          bool gefaehrdet,
          bool raubtier,
          int anzahl,
          int alter,
          bool zugvogel,
          double flugreichweite,
          double fluegelspannweite)
        : Spezies(bezeichnung,
                  gefaehrdet,
                  raubtier,
                  anzahl,
                  alter),
        m_zugvogel(zugvogel),
        m_flugreichweite(flugreichweite),
        m_fluegelspannweite(fluegelspannweite){};
    ~Vogel(){};
    bool istZugvogel() const { return m_zugvogel; }
    double getFlugreichweite() const { return m_flugreichweite; }
    double getFluegelspannweite() const { return m_fluegelspannweite; }
    json toJson() const override;
    //void display() override;
    std::string getInfo() override;
    void ausgabeTooltip(std::ostream &os) const override;
};

#endif // VOGEL_H
