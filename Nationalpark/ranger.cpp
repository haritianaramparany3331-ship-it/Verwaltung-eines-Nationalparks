#include "ranger.h"
#include <fstream>

std::string Ranger::getInfo(){
    return "Vorname: " + m_vorname+
           "\nNachname: " + m_nachname+
           "\nBeruf: Ranger"+
           "\nPersonalnummer: " + std::to_string(m_personalnummer)+
           "\nStundenzahl: " + std::to_string(m_stundenzahl)+
           "\nGehalt: " + std::to_string(m_gehalt)+
           "\nRevier: " + m_revier+
           "\nEinsatzbereich: " + m_einsatzbereich;
}

void Ranger::serialize(std::ofstream &out){
    std::string typ = "Ranger";
    out << typ << ","
        << m_vorname << ","
        << m_nachname << ","
        << m_personalnummer << ","
        << m_stundenzahl << ","
        << m_gehalt << ","
        << m_revier << ","
        << m_einsatzbereich << "\n";
}
