#include "wege.h"

int Wege::getStart() const{
    return start;
}

int Wege::getZiel() const{
    return ziel;
}

int Wege::getLaenge() const{
    return laenge;
}

Wege Wege::fromJson(const json &j){
    return Wege(
        j.at("start").get<int>(),
        j.at("ziel").get<int>(),
        j.at("laenge").get<int>()
        );
}

json Wege::toJson() const{
    json j;
    j["start"] = start;
    j["ziel"] = ziel;
    j["laenge"] = laenge;
    return j;
}
