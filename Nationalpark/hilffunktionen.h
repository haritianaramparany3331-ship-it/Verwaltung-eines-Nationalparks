#ifndef HILFFUNKTIONEN_H
#define HILFFUNKTIONEN_H
#include <iostream>
#include <fstream>
#include "angestellter.h"
#include "spezies.h"

template<typename T, typename U>
std::vector<T*> filter(const std::vector<U*> &liste){
    std::vector<T*> ergebnis;
    for (U* element : liste){
        if (T* passend = dynamic_cast<T*>(element)){
            ergebnis.push_back(passend);
        }
    }
    return ergebnis;
}

void streamFehlerBehandeln(std::ofstream &out);
void streamFehlerBehandeln(std::ifstream &in);
template <typename T,
         typename = std::enable_if_t<
                        std::is_base_of_v<Spezies, T> ||
                        std::is_base_of_v<Angestellter, T>
                        >>
std::ostream& operator<<(std::ostream &os, const T &obj){
        obj.ausgabeTooltip(os);
        return os;
}

#endif // HILFFUNKTIONEN_H
