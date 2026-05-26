#include "verwaltung.h"
#include <fstream>

std::string Verwaltung::getInfo(){
    return "Vorname: " + m_vorname+
           "\nNachname: " + m_nachname+
           "\nBeruf: Verwalter"+
           "\nPersonalnummer: " + std::to_string(m_personalnummer)+
           "\nStundenzahl: " + std::to_string(m_stundenzahl)+
           "\nGehalt: " + std::to_string(m_gehalt)+
           "\nAbteilung: " + m_abteilung+
           "\nBüro: " + m_buero;
}

void Verwaltung::serialize(std::ofstream &out){
    std::string typ = "Verwalter";
    out << typ << ","
        << m_vorname << ","
        << m_nachname << ","
        << m_personalnummer << ","
        << m_stundenzahl << ","
        << m_gehalt << ","
        << m_abteilung << ","
        << m_buero << "\n";
}
