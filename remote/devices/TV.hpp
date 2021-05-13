#pragma once

#include <string>


class TV
{
public:
    TV(std::string location);
    void on();
    void off();
    void setInputChannel();

private:
    std::string location;
    int channel;
};
