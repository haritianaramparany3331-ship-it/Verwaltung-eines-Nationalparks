#include "personalliste.h"
#include <fstream>
#include <sstream>
#include "ranger.h"
#include "verwaltung.h"
#include "wissenschaftler.h"
#include "hilffunktionen.h"

Personalliste::Personalliste() {}

std::vector<Angestellter*> Personalliste::getPersonal() const{
    return personal;
}

void Personalliste::insertPersonal(Angestellter* angestellter){
    personal.push_back(angestellter);
}

int Personalliste::sizePersonalList(){
    return personal.size();
}

void Personalliste::csvSpeichern(){
    std::ofstream out("Personal.csv");
    streamFehlerBehandeln(out);
    for (auto &person : personal){
        person->serialize(out);
    }
    std::cout<<"Ende der Speicherung"<<std::endl;
    out.close();
}

void Personalliste::csvLaden(){
    std::ifstream in("Personal.csv");
    streamFehlerBehandeln(in);
    for (Angestellter *person : personal){
        delete person;
    }
    personal.clear();
    std::string zeile;
    while(std::getline(in, zeile)){
        if (zeile.empty()) continue;
        std::stringstream ss(zeile);
        std::string typ, vorname, nachname;
        int personNum, stundenzahl;
        double gehalt;
        std::getline(ss, typ, ',');
        std::getline(ss, vorname, ',');
        std::getline(ss, nachname, ',');
        ss >> personNum; ss.ignore(1, ',');
        ss >> stundenzahl; ss.ignore(1, ',');
        ss >> gehalt; ss.ignore(1, ',');

        if (typ == "Ranger"){
            std::string revier, einsatzbereich;
            std::getline(ss, revier, ',');
            std::getline(ss, einsatzbereich);
            Ranger *r = new Ranger(nachname, vorname, personNum, stundenzahl, gehalt, revier, einsatzbereich);
            personal.push_back(r);
        }
        else if (typ == "Verwalter"){
            std::string abteilung, buero;
            std::getline(ss, abteilung, ',');
            std::getline(ss, buero);
            Verwaltung *v = new Verwaltung(nachname, vorname, personNum, stundenzahl, gehalt, abteilung, buero);
            personal.push_back(v);
        }
        else if (typ == "Wissenschaftler"){
            std::string fachbereich;
            int studienanzahl;
            std::getline(ss, fachbereich, ',');
            ss >> studienanzahl;
            Wissenschaftler *w = new Wissenschaftler(nachname, vorname, personNum, stundenzahl, gehalt, fachbereich, studienanzahl);
            personal.push_back(w);
        }
        else{
            std::cerr<<"Unbekannter Typ, FATAL"<<std::endl;
            continue;
        }
    }
    in.close();
}
