#pragma once

#include "Command.hpp"
#include "../devices/Light.hpp"


class LightOffCommand : public Command
{
public:
	LightOffCommand(Light& light);
	void execute();
	void undo();

private:
	Light& light;
};
