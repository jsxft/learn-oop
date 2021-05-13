#pragma once

#include <string>


class Stereo
{
public:
    Stereo(std::string location);

    void on();
    void off();
    void setCd();
    void setDvd();
    void setRadio();
    void setVolume(int volume);

private:
    std::string location;
};
