#ifndef ORTE_H
#define ORTE_H

#include <iostream>
#include <json.hpp>

using namespace nlohmann;

class Orte
{
private:
    int id = 0;
    std::string name = "";
    std::string typ = "";
    int x = 0;
    int y = 0;
public:
    Orte() = default;
    Orte(int id,
         std::string name,
         std::string typ,
         int x,
         int y) :
        id(id),
        name(name),
        typ(typ),
        x(x),
        y(y)
    {};
    int getId() const;
    std::string getName() const;
    std::string getTyp() const;
    int getX() const;
    int getY() const;
    static Orte fromJson(const json &j);
    json toJson() const;
};

#endif // ORTE_H
