#include "personalliste.h"
#include <fstream>
#include "ranger.h"
#include "verwaltung.h"
#include "wissenschaftler.h"
#include "hilffunktionen.h"

Personalliste::Personalliste() {}

std::vector<Angestellter*>& Personalliste::getPersonal(){
    return personal;
}

void Personalliste::insertPersonal(Angestellter* angestellter){
    personal.push_back(angestellter);
}

int Personalliste::sizePersonalList(){
    return personal.size();
}

void Personalliste::personJsonSpeichern(){
    json personenArray = json::array();
    for (auto &person : personal){
        personenArray.push_back(person->toJson());
    }
    std::ofstream out("person.json");
    streamFehlerBehandeln(out);
    out << std::setw(4) << personenArray << "\n";
    out.close();
}

void Personalliste::personJsonLaden(){
    for (auto &person : personal){
        delete person;
    }
    std::ifstream in("person.json");
    streamFehlerBehandeln(in);
    json personArray;
    try{
        in >> personArray;
    }
    catch(const json::parse_error &e){
        std::cerr<< "Parsing Fehler" << e.what() << std::endl;
    }

    for (const auto &person : personArray){
        std::string typ = person.at("typ");
        std::string vorname = person.at("vorname");
        std::string nachname = person.at("nachname");
        int persoNum = person.at("personalnummer");
        int stundenzahl = person.at("stundenzahl");
        double gehalt = person.at("gehalt");

        if (typ == "Ranger"){
            std::string revier = person.at("revier");
            std::string einsatzbereich = person.at("einsatzbereich");
            Ranger *r = new Ranger(nachname,
                                   vorname,
                                   persoNum,
                                   stundenzahl,
                                   gehalt,
                                   revier,
                                   einsatzbereich);
            personal.push_back(r);
        }
        else if (typ == "Verwalter"){
            std::string abteilung = person.at("abteilung");
            std::string buero = person.at("buero");
            Verwaltung *v = new Verwaltung(nachname,
                                           vorname,
                                           persoNum,
                                           stundenzahl,
                                           gehalt,
                                           abteilung,
                                           buero);
            personal.push_back(v);
        }
        else if (typ == "Wissenschaftler"){
            std::string fachgebiet = person.at("fachgebiet");
            int anzahlStudien = person.at("studienanzahl");
            Wissenschaftler *w = new Wissenschaftler(nachname,
                                                     vorname,
                                                     persoNum,
                                                     stundenzahl,
                                                     gehalt,
                                                     fachgebiet,
                                                     anzahlStudien);
            personal.push_back(w);
        }
        else{
            std::cerr << "FATAL: Unbekannter Typ"<<std::endl;
        }
    }
    in.close();
}

PersonalStatistik Personalliste::berechneStatistik() const{
    PersonalStatistik p;
    p.gesamt = static_cast<int>(personal.size());
    for (const auto &a : personal){
        if (dynamic_cast<Ranger*>(a)) p.ranger++;
        if (dynamic_cast<Verwaltung*>(a)) p.verwalter++;
        if (dynamic_cast<Wissenschaftler*>(a)) p.wissenschaftler++;
        if (a->getPersonalnummer() <= 10000) p.alteMitarbeiter++;
        if (a->getGehalt() >= 2500) p.gutesGehalt++;
        if (a->getStundenzahl() > 30) p.vollzeit++;
    }
    return p;
}
