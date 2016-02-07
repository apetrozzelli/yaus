#include <iostream>

#include "include/Citizen.h"
#include "include/Producer.h"
#include "include/Consumer.h"
#include "include/Bread.h"
#include "include/Water.h"

using namespace std;

class BreadMaker : public Citizen, public Producer<Bread>, public Consumer<Water>
{
public:
    BreadMaker(std::string name) : Citizen(name) {}
    virtual ~BreadMaker() {}
};

typedef Producer<Water> WaterMaker;

int main()
{
    cout << "Hello world!" << endl;

    Citizen a("Alessandro");
    a.SayHello();

    BreadMaker bm("Ciccio");
    bm.SayHello();
    Bread b = bm.provide();

    WaterMaker wm;
    Water w = wm.provide();

    cout << b << ", " << w << endl;

    return 0;
}
