#include "ranger.h"
#include <json.hpp>

using namespace nlohmann;

std::string Ranger::getInfo(){
    return "Vorname: " + m_vorname+
           "\nNachname: " + m_nachname+
           "\nBeruf: Ranger"+
           "\nPersonalnummer: " + std::to_string(m_personalnummer)+
           "\nStundenzahl: " + std::to_string(m_stundenzahl)+
           "\nGehalt: " + std::to_string(m_gehalt)+
           "\nRevier: " + m_revier+
           "\nEinsatzbereich: " + m_einsatzbereich+"\n";
}

json Ranger::toJson() const{
    json ranger = Angestellter::toJson();
    ranger["typ"] = "Ranger";
    ranger["revier"] = m_revier;
    ranger["einsatzbereich"] = m_einsatzbereich;
    return ranger;
}

void Ranger::ausgabeTooltip(std::ostream &os) const{
    Angestellter::ausgabeTooltip(os);
    os << m_revier << " "
       << m_einsatzbereich;
}
