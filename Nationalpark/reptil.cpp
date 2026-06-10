#include "reptil.h"

/*void Reptil::display(){
    std::cout<<"Tier: "<<m_bezeichnung<<std::endl
              <<"Art: Reptil"<<std::endl
              <<"Gifitig? "<<m_giftig<<std::endl
              <<"Optimale Temperatur: "<<m_optimaleTemperatur<<" Grad Celcius"<<std::endl
              <<"Wechselwarm? "<<m_wechselwarm<<std::endl
              <<"Gefaehrdet? "<<m_gefaehrdet<<std::endl
              <<"Raubtier? "<<m_raubtier<<std::endl
              <<"Anzahl der Tieren im Park: "<<m_anzahl<<std::endl;
}
*/

std::string Reptil::getInfo(){
    return "Name: "+m_bezeichnung+
           "\nTyp: Reptil"+
           "\nGefaehrdet? "+std::to_string(m_gefaehrdet)+
           "\nRaubtier? "+std::to_string(m_raubtier)+
           "\nAnzahl: "+std::to_string(m_anzahl)+
           "\nAlter: "+std::to_string(m_alter)+
           "\nGiftig? "+std::to_string(m_giftig)+
           "\nOptimale Temperatur: "+std::to_string(m_optimaleTemperatur)+
           "\nWechselwarm? "+std::to_string(m_wechselwarm)+"\n";
}

json Reptil::toJson() const{
    json reptil = Spezies::toJson();
    reptil["typ"] = "Reptil";
    reptil["giftig"] = m_giftig;
    reptil["optimale Temperatur"] = m_optimaleTemperatur;
    reptil["wechselwarm"] = m_wechselwarm;
    return reptil;
}



