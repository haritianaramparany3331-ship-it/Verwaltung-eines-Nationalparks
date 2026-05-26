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

    std::string getInfo() override;
    void serialize(std::ofstream &out) override;
};

#endif // RANGER_H
