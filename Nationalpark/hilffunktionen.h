#ifndef HILFFUNKTIONEN_H
#define HILFFUNKTIONEN_H
#include <iostream>
#include <fstream>

void streamFehlerBehandeln(std::ofstream &out);
void streamFehlerBehandeln(std::ifstream &in);
template <typename T>
void binaerSchreiben(std::ofstream &out, T &data){
    out.write((char*) &data, sizeof(T));
}
void stringBinaerSchreiben(std::ofstream &out, std::string &strData);
template <typename T>
void binaerLesen(std::ifstream &in, T &data){
    in.read((char*) &data, sizeof(T));
}
void stringBinaerLesen(std::ifstream &in, std::string &string);

#endif // HILFFUNKTIONEN_H
