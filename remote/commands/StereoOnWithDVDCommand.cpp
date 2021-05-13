#include "StereoOnWithDVDCommand.hpp"


StereoOnWithDVDCommand::StereoOnWithDVDCommand(Stereo& stereo)
    : Command{"Stereo On With DVD Command"}, stereo{stereo}
{}

void StereoOnWithDVDCommand::execute()
{
    stereo.on();
    stereo.setDvd();
    stereo.setVolume(11);
}

void StereoOnWithDVDCommand::undo()
{
    stereo.off();
}
