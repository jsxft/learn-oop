#pragma once

#include "Command.hpp"
#include "../devices/CeilingFan.hpp"


class CeilingFanOffCommand : public Command
{
public:
    CeilingFanOffCommand(CeilingFan& fan);
    void execute();
    void undo();

private:
    CeilingFan& fan;
    CeilingFan::Speed prevSpeed;
};
