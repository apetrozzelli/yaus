#ifndef CITIZEN_H
#define CITIZEN_H

#include <string>

class Citizen
{
public:
    Citizen(std::string name);
    virtual ~Citizen();
    Citizen(const Citizen& other);
    Citizen& operator=(const Citizen& other);
    void SayHello();

protected:
private:
    const std::string m_name;
};

#endif // CITIZEN_H
