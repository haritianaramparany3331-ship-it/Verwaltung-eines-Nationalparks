#include "vogel.h"
#include <fstream>
#include "hilffunktionen.h"

/*void Vogel::display(){
    std::cout <<"Tier: "<<m_bezeichnung<<std::endl
              <<"Art: Vogel"<<std::endl
              <<"Zugvogel? "<<m_zugvogel<<std::endl
              <<"Flugreichweite: "<<m_flugreichweite<<" km"<<std::endl
              <<"Fluegelspannweite: "<<m_fluegelspannweite<<" cm"<<std::endl
              <<"Gefaehrdet? "<<m_gefaehrdet<<std::endl
              <<"Raubtier? "<<m_raubtier<<std::endl
              <<"Anzahl der Tieren im Park: "<<m_anzahl<<std::endl;
}
*/

std::string Vogel::getInfo(){
    return "Name: "+m_bezeichnung+
           "\nTyp: Vogel"+
           "\nGefaehrdet? "+std::to_string(m_gefaehrdet)+
           "\nRaubtier? "+std::to_string(m_raubtier)+
           "\nAnzahl: "+std::to_string(m_anzahl)+
           "\nAlter: "+std::to_string(m_alter)+
           "\nZugvogel? "+std::to_string(m_zugvogel)+
           "\nFlugreichweite: "+std::to_string(m_flugreichweite)+
           "\nFluegelspannweite: "+std::to_string(m_fluegelspannweite)+"\n";
}

json Vogel::toJson() const{
    json vogel = Spezies::toJson();
    vogel["typ"] = "Vogel";
    vogel["zugvogel"] = m_zugvogel;
    vogel["flugreichweite"] = m_flugreichweite;
    vogel["fluegelspannweite"] = m_fluegelspannweite;
    return vogel;
}

void Vogel::ausgabeTooltip(std::ostream &os) const{
    Spezies::ausgabeTooltip(os);
    os << m_zugvogel << " "
       << m_flugreichweite << " m "
       << m_fluegelspannweite << " cm";
}
