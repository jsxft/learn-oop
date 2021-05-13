#include "StereoOffCommand.hpp"


StereoOffCommand::StereoOffCommand(Stereo& stereo)
    : Command{"Stereo Off Command"}, stereo{stereo}
{}

void StereoOffCommand::execute()
{
    stereo.off();
}

void StereoOffCommand::undo()
{
    stereo.on();
}
