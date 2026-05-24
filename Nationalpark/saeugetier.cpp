#include "saeugetier.h"
#include <fstream>
#include "hilffunktionen.cpp"

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
           "\nAlter: "+std::to_string(m_alter)+
           "\nTyp: Saeugetier"+
           "\nFellfarbe: "+m_fellfarbe;
}

void Saeugetier::serialize(std::ofstream &out){
    int typ = 1;
    binaerSchreiben(out, typ);
    stringBinaerSchreiben(out, m_bezeichnung);
    //binaerSchreiben(out, m_gefaehrdet);
    //binaerSchreiben(out, m_raubtier);
    binaerSchreiben(out, m_alter);
    stringBinaerSchreiben(out, m_fellfarbe);
    //binaerSchreiben(out, m_rudelTier);
    //binaerSchreiben(out, m_tragzeit);
    //binaerSchreiben(out, m_durschnittsgewicht);
    std::cout<<"Tier vom Typ Saeugetier binaer gespeichert in datei.bin"<<std::endl;
}

Spezies* Saeugetier::deserialize(std::ifstream &in,
                                 std::string &bezeichnung,
                                 //bool &gefaehrdet,
                                 //bool &raubtier,
                                 int &alter){
    std::string fellfarbe;
    stringBinaerLesen(in, fellfarbe);
    //bool rudeltier;
    //binaerLesen(in, rudeltier);
    //int tragzeit;
    //binaerLesen(in, tragzeit);
    //double durschnittsgewicht;
    //binaerLesen(in, durschnittsgewicht);
    return new Saeugetier(bezeichnung,
                          //gefaehrdet,
                          //raubtier,
                          alter,
                          fellfarbe
                          //rudeltier,
                          //tragzeit,
                          //durschnittsgewicht
                          );
}

