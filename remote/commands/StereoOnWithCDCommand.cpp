#include "StereoOnWithCDCommand.hpp"


StereoOnWithCDCommand::StereoOnWithCDCommand(Stereo& stereo)
    : Command{"Stereo On With CD Command"}, stereo{stereo}
{}

void StereoOnWithCDCommand::execute()
{
    stereo.on();
    stereo.setCd();
    stereo.setVolume(11);
}

void StereoOnWithCDCommand::undo()
{
    stereo.off();
}
