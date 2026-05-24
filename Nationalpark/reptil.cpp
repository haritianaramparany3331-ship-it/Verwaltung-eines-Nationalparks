#include "reptil.h"
#include <fstream>
#include "hilffunktionen.cpp"

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
           "\nAlter: "+std::to_string(m_alter)+
           "\nTyp: Reptil"+
           "\nGiftig? "+std::to_string(m_giftig);
}

void Reptil::serialize(std::ofstream &out){
    int typ = 2;
    binaerSchreiben(out, typ);
    stringBinaerSchreiben(out, m_bezeichnung);
    //binaerSchreiben(out, m_gefaehrdet);
    //binaerSchreiben(out, m_raubtier);
    binaerSchreiben(out, m_alter);
    binaerSchreiben(out, m_giftig);
    //binaerSchreiben(out, m_optimaleTemperatur);
    //binaerSchreiben(out, m_wechselwarm);
    std::cout<<"Tier vom Typ Reptil binaer gespeichert in datei.bin"<<std::endl;
}

Spezies* Reptil::deserialize(std::ifstream &in,
                             std::string &bezeichnung,
                             //bool &gefaehrdet,
                             //bool &raubtier,
                             int &alter){
    bool giftig;
    binaerLesen(in, giftig);
    //double optimaleTemperatur;
    //binaerLesen(in, optimaleTemperatur);
    //bool wechselwarm;
    //binaerLesen(in, wechselwarm);
    return new Reptil(bezeichnung,
                      //gefaehrdet,
                      //raubtier,
                      alter,
                      giftig
                      //optimaleTemperatur,
                      //wechselwarm
                      );
}


