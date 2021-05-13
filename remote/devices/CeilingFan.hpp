#pragma once

#include <string>


class CeilingFan
{
public:
    enum Speed { OFF, LOW, MEDIUM, HIGH };

    CeilingFan(std::string location);
    
    void high();
    void medium();
    void low();
    void off();

    Speed getSpeed();

private:
    std::string location;
    Speed level;
};
