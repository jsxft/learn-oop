#include "LightOffCommand.hpp"


LightOffCommand::LightOffCommand(Light& light)
	: Command{"Light Off Command"}, light{light}
{}

void LightOffCommand::execute()
{
	light.off();
}

void LightOffCommand::undo()
{
	light.on();
}
