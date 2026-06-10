#include "spezies.h"

void Spezies::setAnzahl(int &anzahl){
    m_anzahl = anzahl;
}

int Spezies::getAnzahl(){
    return m_anzahl;
}

std::string Spezies::getBezeichnung() const{
    return m_bezeichnung;
}

int Spezies::getAlter() const{
    return m_alter;
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

