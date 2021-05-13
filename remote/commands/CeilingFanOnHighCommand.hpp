#pragma once

#include "Command.hpp"
#include "../devices/CeilingFan.hpp"


class CeilingFanOnHighCommand : public Command
{
public:
    CeilingFanOnHighCommand(CeilingFan& fan);
    void execute();
    void undo();

private:
    CeilingFan& fan;
    CeilingFan::Speed prevSpeed;
};
