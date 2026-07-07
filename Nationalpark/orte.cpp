#include "orte.h"

int Orte::getId() const{
    return id;
}

std::string Orte::getName() const{
    return name;
}

std::string Orte::getTyp() const{
    return typ;
}

int Orte::getX() const{
    return x;
}

int Orte::getY() const{
    return y;
}

Orte Orte::fromJson(const json &j){
    return Orte(
        j.at("id").get<int>(),
        j.at("name").get<std::string>(),
        j.at("typ").get<std::string>(),
        j.at("x").get<int>(),
        j.at("y").get<int>()
        );
}

json Orte::toJson() const{
    json j;
    j["id"] = id;
    j["name"] = name;
    j["typ"] = typ;
    j[x] = x;
    j[y] = y;
    return j;
}
