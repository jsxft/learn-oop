#include <iostream>

#include "Stereo.hpp"


Stereo::Stereo(std::string location)
    : location{location}
{}

void Stereo::on()
{
    std::cout << location << " stereo is on\n";
}

void Stereo::off()
{
    std::cout << location << " stereo is off\n";
}

void Stereo::setCd()
{
    std::cout << location << " stereo is set for CD input\n";
}

void Stereo::setDvd()
{
    std::cout << location << " stereo is set for DVD input\n";
}

void Stereo::setRadio()
{
    std::cout << location << " stereo is set for Radio\n";
}

void Stereo::setVolume(int volume)
{
    std::cout << location << " stereo volume is set to " << volume << '\n';
}
