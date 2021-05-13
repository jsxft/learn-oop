#pragma once

#include "Command.hpp"
#include "../devices/Stereo.hpp"


class StereoOffCommand : public Command
{
public:
    StereoOffCommand(Stereo& stereo);
    void execute();
    void undo();

private:
    Stereo& stereo;
};
