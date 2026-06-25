#include "saeugetier.h"
#include <fstream>
#include "hilffunktionen.h"

/*void Saeugetier::display(){
    std::cout<<"Tier: "<<m_bezeichnung<<std::endl
              <<"Art: Saeugetier"<<std::endl
              <<"Rudeltier? "<<m_rudelTier<<std::endl
              <<"Tragzeit: "<<m_tragzeit<<" Monaten"<<std::endl
              <<"Durschnittsgewicht: "<<m_durschnittsgewicht<<" kg"<<std::endl
              <<"Gefaehrdet? "<<m_gefaehrdet<<std::endl
              <<"Raubtier? "<<m_raubtier<<std::endl
              <<"Anzahl der Tieren im Park: "<<m_anzahl<<std::endl;
}
*/

std::string Saeugetier::getInfo(){
    return "Name: "+m_bezeichnung+
           "\nTyp: Saeugetier"+
           "\nGefaehrdet? "+std::to_string(m_gefaehrdet)+
           "\nRaubtier? "+std::to_string(m_raubtier)+
           "\nAnzahl: "+std::to_string(m_anzahl)+
           "\nAlter: "+std::to_string(m_alter)+
           "\nRudeltier? "+std::to_string(m_rudelTier)+
           "\nTragzeit: "+std::to_string(m_tragzeit)+
           "\nDurschnittsgewicht: "+std::to_string(m_durschnittsgewicht)+
           "\nFellfarbe: "+m_fellfarbe+"\n";
}

json Saeugetier::toJson() const{
    json saeugetier = Spezies::toJson();
    saeugetier["typ"] = "Saeugetier";
    saeugetier["rudeltier"] = m_rudelTier;
    saeugetier["tragzeit"] = m_tragzeit;
    saeugetier["durschnittsgewicht"] = m_durschnittsgewicht;
    saeugetier["fellfarbe"] = m_fellfarbe;
    return saeugetier;
}

void Saeugetier::ausgabeTooltip(std::ostream &os) const{
    Spezies::ausgabeTooltip(os);
    os << m_rudelTier << " "
       << m_tragzeit << " Monate "
       << m_durschnittsgewicht << " kg "
       << m_fellfarbe;
}
