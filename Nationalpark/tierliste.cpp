#include "tierliste.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <saeugetier.h>
#include <reptil.h>
#include <vogel.h>
#include <spezies.h>
#include "hilffunktionen.h"

std::vector<Spezies*>& Tierliste::getFauna(){
    return fauna;
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

void Tierliste::tierJsonSpeichern(){
    json tierArray = json::array();
    for (auto &tier : fauna){
        tierArray.push_back(tier->toJson());
    }
    std::ofstream out("tier.json");
    streamFehlerBehandeln(out);
    out << std::setw(4) << tierArray << "\n";
    out.close();
}

void Tierliste::tierJsonLaden(){
    for (auto &tier : fauna){
        delete tier;
    }
    std::ifstream in("tier.json");
    streamFehlerBehandeln(in);
    json tierArray;
    try{
        in >> tierArray;
    }
    catch(const json::parse_error &e){
        std::cerr<< "Parsing Fehler" << e.what() << std::endl;
    }

    for (const auto &tier : tierArray){
        std::string typ = tier.at("typ");
        std::string bezeichnung = tier.at("bezeichnung");
        bool gefaehrdet = tier.at("gefaehrdet");
        bool raubtier = tier.at("raubtier");
        int anzahl = tier.at("anzahl");
        int alter = tier.at("alter");

        if (typ == "Reptil"){
            bool giftig = tier.at("giftig");
            double optTemp = tier.at("optimale Temperatur");
            bool wechselwarm = tier.at("wechselwarm");
            Reptil *r = new Reptil(bezeichnung,
                                   gefaehrdet,
                                   raubtier,
                                   anzahl,
                                   alter,
                                   giftig,
                                   optTemp,
                                   wechselwarm);
            fauna.push_back(r);
        }
        else if (typ == "Saeugetier"){
            bool rudeltier = tier.at("rudeltier");
            int tragzeit = tier.at("tragzeit");
            double durschnittsgewicht = tier.at("durschnittsgewicht");
            std::string fellfarbe = tier.at("fellfarbe");
            Saeugetier *s = new Saeugetier(bezeichnung,
                                   gefaehrdet,
                                   raubtier,
                                   anzahl,
                                   alter,
                                   rudeltier,
                                   tragzeit,
                                   durschnittsgewicht,
                                   fellfarbe);
            fauna.push_back(s);
        }
        else if (typ == "Vogel"){
            bool zugvogel = tier.at("zugvogel");
            double flugreichweite = tier.at("flugreichweite");
            double fluegelspannweite = tier.at("fluegelspannweite");
            Vogel *v = new Vogel(bezeichnung,
                                   gefaehrdet,
                                   raubtier,
                                   anzahl,
                                   alter,
                                   zugvogel,
                                   flugreichweite,
                                   fluegelspannweite);
            fauna.push_back(v);
        }
        else{
            std::cerr << "FATAL: Unbekannter Typ"<<std::endl;
        }
    }
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

TierStatistik Tierliste::berechneStatistik() const{
    TierStatistik t;
    t.gesamt = static_cast<int>(fauna.size());
    for (const auto &s : fauna){
        if (Reptil *r = dynamic_cast<Reptil*>(s)){
            t.reptil++;
            if (r->istGiftig()) t.giftigeReptile++;
        }
        if (Saeugetier *sa = dynamic_cast<Saeugetier*>(s)){
            t.sauegetier++;
            if (sa->getDurchschnittsgewicht() >= 1000) t.schwereSauegetiere++;
        }
        if (Vogel *v = dynamic_cast<Vogel*>(s)){
            t.vogel++;
            if (v->getFluegelspannweite() >= 60) t.breiteVögel++;
        }
        if (s->istGefaehrdet()) t.gefaehrdeteTiere++;
        if (s->istRaubtier()) t.raubtiere++;
        if (s->getAlter() > 20) t.alteTiere++;
    }
    return t;
}


