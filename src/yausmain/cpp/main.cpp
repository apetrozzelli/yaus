#include <iostream>

#include "Citizen.h"
#include "Producer.h"
#include "Consumer.h"
#include "Bread.h"
#include "Water.h"

using namespace std;

class BreadMaker : public Citizen, public Producer<Bread>, public Consumer<Water>
{
public:
    BreadMaker(std::string name, std::set<Citizen> citizens) : Citizen(name), Producer(citizens) {}
    virtual ~BreadMaker() {}
};

typedef Producer<Water> WaterMaker;

int main()
{
    cout << "Hello world!" << endl;

    std::set<Citizen> _citizens;

    Citizen a("Alessandro");
    a.SayHello();

    BreadMaker bm("Ciccio", _citizens);
    bm.SayHello();
    Bread b = bm.provide();

    WaterMaker wm(_citizens);
    Water w = wm.provide();

    cout << b << ", " << w << endl;

    return 0;
}