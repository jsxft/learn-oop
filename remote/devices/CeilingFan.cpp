#include <iostream>

#include "CeilingFan.hpp"


CeilingFan::CeilingFan(std::string location)
    : location{location}, level{OFF}
{}

void CeilingFan::high()
{
    level = HIGH;
    std::cout << location << " ceiling fan is on high\n";
}

void CeilingFan::medium()
{
    level = MEDIUM;
    std::cout << location << " ceiling fan is on medium\n";
}

void CeilingFan::low()
{
    level = LOW;
    std::cout << location << " ceiling fan is on low\n";
}

void CeilingFan::off()
{
    level = OFF;
    std::cout << location << " ceiling fan is off\n";
}

CeilingFan::Speed CeilingFan::getSpeed()
{
    return level;
}
