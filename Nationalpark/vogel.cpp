#include "vogel.h"
#include <fstream>
#include "hilffunktionen.cpp"

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
           "\nAlter: "+std::to_string(m_alter)+
           "\nTyp: Vogel"+
           "\nFluegelspannweite: "+std::to_string(m_fluegelspannweite);
}

void Vogel::serialize(std::ofstream &out){
    int typ = 3;
    binaerSchreiben(out, typ);
    stringBinaerSchreiben(out, m_bezeichnung);
    //binaerSchreiben(out, m_gefaehrdet);
    //binaerSchreiben(out, m_raubtier);
    binaerSchreiben(out, m_alter);
    //binaerSchreiben(out, m_zugvogel);
    //binaerSchreiben(out, m_flugreichweite);
    binaerSchreiben(out, m_fluegelspannweite);
    std::cout<<"Tier vom Typ Vogel binaer gespeichert in datei.bin"<<std::endl;
}

Spezies* Vogel::deserialize(std::ifstream &in,
                            std::string &bezeichnung,
                            //bool &gefaehrdet,
                            //bool &raubtier,
                            int &alter){
    //bool zugvogel;
    //binaerLesen(in, zugvogel);
    //double flugreichweite;
    //binaerLesen(in, flugreichweite);
    double fluegelspannweite;
    binaerLesen(in, fluegelspannweite);
    return new Vogel(bezeichnung,
                     //gefaehrdet,
                     //raubtier,
                     alter,
                     //zugvogel,
                     //flugreichweite,
                     fluegelspannweite);
}



