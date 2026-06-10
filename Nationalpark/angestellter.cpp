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
