#pragma once

#include "Command.hpp"
#include "../devices/Stereo.hpp"


class StereoOnWithRadioCommand : public Command
{
public:
    StereoOnWithRadioCommand(Stereo& stereo);
    void execute();
    void undo();

private:
    Stereo& stereo;
};
