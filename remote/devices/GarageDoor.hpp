#pragma once

#include <string>


class GarageDoor
{
public:
    GarageDoor(std::string location);

    void up();
    void down();
    void stop();
    void lightOn();
    void lightOff();

private:
    std::string location;
};
