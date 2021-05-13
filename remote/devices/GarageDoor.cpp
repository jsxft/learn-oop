#include <iostream>

#include "GarageDoor.hpp"


GarageDoor::GarageDoor(std::string location)
    : location{location}
{}

void GarageDoor::up()
{
    std::cout << location << " garage door is up\n";
}

void GarageDoor::down()
{
    std::cout << location << " garage door is down\n";
}

void GarageDoor::stop()
{
    std::cout << location << " garage door is stopped\n";
}

void GarageDoor::lightOn()
{
    std::cout << location << " garage light is on\n";
}

void GarageDoor::lightOff()
{
    std::cout << location << " garage light is off\n";
}
