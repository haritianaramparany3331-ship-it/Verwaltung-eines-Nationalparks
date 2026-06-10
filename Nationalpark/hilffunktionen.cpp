#include <fstream>
#include <iostream>
#include "hilffunktionen.h"

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
