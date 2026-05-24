#include "tierliste.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <saeugetier.h>
#include <reptil.h>
#include <vogel.h>
#include <spezies.h>
#include "hilffunktionen.cpp"

std::vector<Spezies*> Tierliste::getFauna() const{
    return fauna;
}

void streamFehlerBehandeln(std::ofstream &out){
    if(!out){
        std::cout<<"Datei nicht geoeffnet"<<std::endl;
        return;
    }
}

void streamFehlerBehandeln(std::ifstream &in){
    if(!in){
        std::cout<<"Datei nicht geoeffnet"<<std::endl;
        return;
    }
}

void Tierliste::insertAnimal(Spezies* animal){
    fauna.push_back(animal);
    //std::cout<<"Erfolgreich hinzugefuegt"<<std::endl;
}

int Tierliste::sizeList(){
    return fauna.size();
}

/*void Tierliste::printInfoOfAllAnimals(){
    if (fauna.empty()) std::cout<<"Leer"<<std::endl;
    int numeration = 1;
    for (Spezies *spezies : fauna){
        std::cout<<numeration<<"- ";
        spezies->display();
        std::cout<<std::endl;
        numeration++;
    }
}
*/

void Tierliste::binaerSpeichern(){
    std::ofstream out("datei.bin", std::ios::binary);
    streamFehlerBehandeln(out);
    for (Spezies* spezies : fauna){
        spezies->serialize(out);
    }
    std::cout<<"Ende der Speicherung"<<std::endl;
    out.close();
}

void Tierliste::binaerLaden(){
    std::ifstream in("datei.bin", std::ios::binary);
    streamFehlerBehandeln(in);
    for (Spezies* s : fauna){
        delete s;
    }
    fauna.clear();
    std::cout<<"Jetztige Liste geleert und Binaerdaten aus datei.bin geholt"<<std::endl;
    Spezies *s = nullptr;
    while(true){
        int typ;
        if(!in.read((char*) &typ, sizeof(int))) break;

        std::string bezeichnung;
        stringBinaerLesen(in, bezeichnung);
        //bool gefaehrdet;
        //binaerLesen(in, gefaehrdet);
        //bool raubtier;
        //binaerLesen(in, raubtier);
        int alter;
        binaerLesen(in, alter);

        if (typ==1){
            s = Saeugetier::deserialize(in,
                                        bezeichnung,
                                        //gefaehrdet,
                                        //raubtier,
                                        alter);
            insertAnimal(s);
            std::cout<<"Tier vom Typ Saeugetier in die Liste hinzugefuegt"<<std::endl;
        }
        else if (typ==2){
            s = Reptil::deserialize(in,
                                    bezeichnung,
                                    //gefaehrdet,
                                    //raubtier,
                                    alter);
            insertAnimal(s);
            std::cout<<"Tier vom Typ Reptil in die Liste hinzugefuegt"<<std::endl;
        }
        else if (typ==3){
            s = Vogel::deserialize(in,
                                   bezeichnung,
                                   //gefaehrdet,
                                   //raubtier,
                                   alter);
            insertAnimal(s);
            std::cout<<"Tier vom Typ Vogel in die Liste hinzugefuegt"<<std::endl;
        }
        else{
            std::cout<<"Unbekannter Typ, stream corrupted, vielleicht wieder speichern dann neu laden. Abbruch!"<<std::endl;
            break;
        }
    }
    std::cout<<"Ende der Ladung"<<std::endl;
    in.close();
}

/*void Tierliste::testDateiErzeugen(){
    std::ofstream test("datei.bin");
    int testZahl = 999;
    test.write((char*) &testZahl, sizeof(int));
    std::cout<<"Datei datei.bin wurde erfolgreich korruptiert"<<std::endl;
    std::cout<<"Neu speichern und laden, um die korrupte Datei zu ueberschreiben"<<std::endl;
    test.close();
}
*/


