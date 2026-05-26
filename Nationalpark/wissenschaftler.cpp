#include "wissenschaftler.h"
#include <fstream>

std::string Wissenschaftler::getInfo(){
    return "Vorname: " + m_vorname+
           "\nNachname: " + m_nachname+
           "\nBeruf: Wissenschaftler"+
           "\nPersonalnummer: " + std::to_string(m_personalnummer)+
           "\nStundenzahl: " + std::to_string(m_stundenzahl)+
           "\nGehalt: " + std::to_string(m_gehalt)+
           "\nFachgebiet: " + m_fachgebiet+
           "\nAnzahl von Studien: " + std::to_string(m_anzahlStudien);
}

void Wissenschaftler::serialize(std::ofstream &out){
    std::string typ = "Wissenschaftler";
    out << typ << ","
        << m_vorname << ","
        << m_nachname << ","
        << m_personalnummer << ","
        << m_stundenzahl << ","
        << m_gehalt << ","
        << m_fachgebiet << ","
        << m_anzahlStudien << "\n";
}
