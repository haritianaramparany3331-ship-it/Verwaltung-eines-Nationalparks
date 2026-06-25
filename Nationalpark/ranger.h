#ifndef RANGER_H
#define RANGER_H
#include <angestellter.h>

class Ranger : public Angestellter
{
private:
    std::string m_revier;
    std::string m_einsatzbereich;
public:
    Ranger(std::string nachname,
           std::string vorname,
           int personalnummer,
           int stundenzahl,
           double gehalt,
           std::string revier,
           std::string einsatzbereich) :
        Angestellter(nachname,
                     vorname,
                     personalnummer,
                     stundenzahl,
                     gehalt),
        m_revier(revier),
        m_einsatzbereich(einsatzbereich){};
    std::string getRevier() const { return m_revier; }
    std::string getEinsatzbereich() const { return m_einsatzbereich; }

    std::string getInfo() override;
    json toJson() const override;
    void ausgabeTooltip(std::ostream &os) const override;
};

#endif // RANGER_H
