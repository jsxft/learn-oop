#pragma once

#include "Command.hpp"
#include "../devices/Stereo.hpp"


class StereoOnWithDVDCommand : public Command
{
public:
    StereoOnWithDVDCommand(Stereo& stereo);
    void execute();
    void undo();

private:
    Stereo& stereo;
};
