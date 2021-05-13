#pragma once

#include "Command.hpp"
#include "../devices/Light.hpp"


class LightOnCommand : public Command
{
public:
	LightOnCommand(Light& light);
	void execute();
	void undo();

private:
	Light& light;
};
