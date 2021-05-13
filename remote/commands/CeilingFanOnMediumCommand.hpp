#pragma once

#include "Command.hpp"
#include "../devices/CeilingFan.hpp"


class CeilingFanOnMediumCommand : public Command
{
public:
    CeilingFanOnMediumCommand(CeilingFan& fan);
    void execute();
    void undo();

private:
    CeilingFan& fan;
    CeilingFan::Speed prevSpeed;
};
