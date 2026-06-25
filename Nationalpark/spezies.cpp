#include "spezies.h"

void Spezies::setAnzahl(int &anzahl){
    m_anzahl = anzahl;
}

json Spezies::toJson() const{
    return {
        {"bezeichnung", m_bezeichnung},
        {"gefaehrdet", m_gefaehrdet},
        {"raubtier", m_raubtier},
        {"anzahl", m_anzahl},
        {"alter", m_alter}
    };
}

void Spezies::ausgabeTooltip(std::ostream &os) const{
    os << m_bezeichnung << " "
       << m_gefaehrdet << " "
       << m_raubtier << " "
       << m_anzahl << " Stücke "
       << m_alter << " Jahre alt ";
}

