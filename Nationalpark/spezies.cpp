#include "spezies.h"

/*void Spezies::setAnzahl(int &anzahl){
    m_anzahl = anzahl;
}

int Spezies::getAnzahl(){
    return m_anzahl;
}
*/

std::string Spezies::getBezeichnung() const{
    return m_bezeichnung;
}

int Spezies::getAlter() const{
    return m_alter;
}
