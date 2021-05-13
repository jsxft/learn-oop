#pragma once

#include <memory>

#include "../commands/Command.hpp"


class SimpleRemoteControl
{
public:
	SimpleRemoteControl() = default;

	void setCommand(Command::pointer command);
	void buttonWasPressed();

private:
	Command::pointer slot;
};
