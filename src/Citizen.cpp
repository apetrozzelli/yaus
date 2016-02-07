#include "../include/Citizen.h"

#include <iostream>

Citizen::Citizen(std::string name) : m_name(name)
{
    //ctor
}

Citizen::~Citizen()
{
    //dtor
}

Citizen::Citizen(const Citizen& other)
{
    //copy ctor
}

Citizen& Citizen::operator=(const Citizen& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

void Citizen::SayHello()
{
    std::cout << "Hello from " << m_name << std::endl;
}
