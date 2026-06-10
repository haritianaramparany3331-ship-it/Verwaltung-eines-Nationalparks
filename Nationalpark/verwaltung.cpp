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
           "\nBüro: " + m_buero + "\n";
}

json Verwaltung::toJson() const{
    json verwaltung = Angestellter::toJson();
    verwaltung["typ"] = "Verwalter";
    verwaltung["abteilung"] = m_abteilung;
    verwaltung["buero"] = m_buero;
    return verwaltung;
}
