#ifndef PRODUCER_H
#define PRODUCER_H

#include <iostream>
#include <set>
#include "Citizen.h"

template <class T>
class Producer
{
public:
    Producer(std::set<Citizen> &citizens) : _citizens(citizens) {}

    T provide()
    {
        T t;
        std::cout << t << " resource created." << std::endl;
        return t;
    }
    private:
    std::set<Citizen> &_citizens;
};

#endif // PRODUCER_H
