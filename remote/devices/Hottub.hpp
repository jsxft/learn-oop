#pragma once


class Hottub
{
public:
    Hottub() = default;

    void on();
    void off();

    void bubblesOn();
    void bubblesOff();

    void jetsOn();
    void jetsOff();

    void setTemperature(int temperature);

    void heat();
    void cool();

private:
    bool isOn;
    int temperature;
};
