#include <iostream>

#include "TV.hpp"


TV::TV(std::string location)
    : location{location}
{}

void TV::on()
{
    std::cout << location << " TV is on\n";
}

void TV::off()
{
    std::cout << location << " TV is off\n";
}

void TV::setInputChannel()
{
    channel = 3;
    std::cout << location << " TV channel is set for DVD\n";
}
