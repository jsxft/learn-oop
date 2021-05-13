#include "LightOnCommand.hpp"


LightOnCommand::LightOnCommand(Light& light)
	: Command{"Light On Command"}, light{light}
{}

void LightOnCommand::execute()
{
	light.on();
}

void LightOnCommand::undo()
{
	light.off();
}
