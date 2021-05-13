#pragma once

#include "Command.hpp"
#include "../devices/Stereo.hpp"


class StereoOnWithCDCommand : public Command
{
public:
    StereoOnWithCDCommand(Stereo& stereo);
    void execute();
    void undo();

private:
    Stereo& stereo;
};
