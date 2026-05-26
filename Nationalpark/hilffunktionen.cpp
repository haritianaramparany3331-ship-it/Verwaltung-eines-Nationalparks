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

void stringBinaerSchreiben(std::ofstream &out, std::string &strData){
    size_t strDataSize = strData.size();
    out.write((char*) &strDataSize, sizeof(size_t));
    out.write(strData.c_str(), strDataSize);
}

void stringBinaerLesen(std::ifstream &in, std::string &string){
    size_t stringSize;
    in.read((char*) &stringSize, sizeof(size_t));
    string.resize(stringSize);
    in.read(&string[0], stringSize);
}
