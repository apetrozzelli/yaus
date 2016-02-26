#ifndef WATER_H
#define WATER_H

#include <ostream>

class Water
{
public:
    Water();
    virtual ~Water();
protected:
private:
    friend std::ostream& operator<<(std::ostream& out, Water& water);
};

inline std::ostream& operator<<(std::ostream& out, Water& water)
{
    out << "Water";
    return out;
}

#endif // WATER_H
