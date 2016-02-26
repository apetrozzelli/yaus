#ifndef CONSUMER_H
#define CONSUMER_H

#include <iostream>

template <class T>
class Consumer
{
public:
    void employ(T &t)
    {
        std::cout << "Going to employ " << t << "..." << std::endl;
        t.exhausted();
        std::cout << "..." << t << " resource used." << std::endl;
    }
};


#endif // CONSUMER_H
