#include "angestellter.h"

json Angestellter::toJson() const{
    return {
        {"vorname", m_vorname},
        {"nachname", m_nachname},
        {"personalnummer", m_personalnummer},
        {"stundenzahl", m_stundenzahl},
        {"gehalt", m_gehalt}
    };
}

void Angestellter::ausgabeTooltip(std::ostream &os) const{
    os << m_vorname << " "
       << m_nachname << " "
       << "Nr. " << m_personalnummer << " "
       << m_stundenzahl << " Stunden "
       << m_gehalt << " EUR ";
}
