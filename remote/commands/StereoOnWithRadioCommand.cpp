#include "StereoOnWithRadioCommand.hpp"


StereoOnWithRadioCommand::StereoOnWithRadioCommand(Stereo& stereo)
    : Command{"Stereo On With Radio Command"}, stereo{stereo}
{}

void StereoOnWithRadioCommand::execute()
{
    stereo.on();
    stereo.setRadio();
    stereo.setVolume(11);
}

void StereoOnWithRadioCommand::undo()
{
    stereo.off();
}
