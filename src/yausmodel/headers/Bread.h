#ifndef BREAD_H
#define BREAD_H

#include <ostream>

class Bread
{
public:
    Bread();
    virtual ~Bread();
protected:
private:
    friend std::ostream& operator<<(std::ostream& out, Bread& bread);
};

inline std::ostream& operator<<(std::ostream& out, Bread& bread)
{
    out << "Bread";
    return out;
}

#endif // BREAD_H
