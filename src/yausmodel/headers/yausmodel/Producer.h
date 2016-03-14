#ifndef PRODUCER_H
#define PRODUCER_H

#include <iostream>
#include <vector>
#include "Citizen.h"

template <class T>
class Producer
{
public:
    Producer(std::vector<Citizen> &citizens) : _citizens(citizens) {}

    T provide()
    {
        T t;
        std::cout << t << " resource created." << std::endl;
        return t;
    }
    private:
    std::vector<Citizen> &_citizens;
};

#endif // PRODUCER_H
