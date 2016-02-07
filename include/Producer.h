#ifndef PRODUCER_H
#define PRODUCER_H

#include <iostream>
#include <set>

template <class T>
class Producer
{
public:
    Producer(std::set<Producer> &producers) : _producers(producers) {}

    T provide()
    {
        T t;
        std::cout << t << " resource created." << std::endl;
        return t;
    }
    private:
    std::set<Producer> &_producers;
};

#endif // PRODUCER_H
