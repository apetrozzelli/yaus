#include <iostream>
#include <vector>

#include "yausmodel/Citizen.h"
#include "yausmodel/Producer.h"
#include "yausmodel/Consumer.h"
#include "yausmodel/Bread.h"
#include "yausmodel/Water.h"

using namespace std;

class BreadMaker : public Citizen, public Producer<Bread>, public Consumer<Water>
{
public:
    BreadMaker(std::string name, std::vector<Citizen> citizens) : Citizen(name), Producer(citizens) {}
    virtual ~BreadMaker() {}
};

typedef Producer<Water> WaterMaker;

int main()
{
    cout << "Hello world!" << endl;

    std::vector<Citizen> _citizens;

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
