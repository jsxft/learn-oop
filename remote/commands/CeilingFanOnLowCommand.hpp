#pragma once

#include "Command.hpp"
#include "../devices/CeilingFan.hpp"


class CeilingFanOnLowCommand : public Command
{
public:
    CeilingFanOnLowCommand(CeilingFan& fan);
    void execute();
    void undo();

private:
    CeilingFan& fan;
    CeilingFan::Speed prevSpeed;
};
