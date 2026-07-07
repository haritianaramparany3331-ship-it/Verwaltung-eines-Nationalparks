#ifndef WEGE_H
#define WEGE_H

#include <json.hpp>

using namespace nlohmann;

class Wege
{
private:
    int start = 0;
    int ziel = 0;
    int laenge = 0;
public:
    Wege() = default;
    Wege(int start,
         int ziel,
         int laenge) :
        start(start),
        ziel(ziel),
        laenge(laenge){};
    int getStart() const;
    int getZiel() const;
    int getLaenge() const;
    static Wege fromJson(const json &j);
    json toJson() const;
};

#endif // WEGE_H
