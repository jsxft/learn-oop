#pragma once

#include <string>
#include <memory>


class Command
{
public:
	using pointer = std::shared_ptr<Command>;

	virtual void execute() = 0;
	virtual void undo() = 0;
	std::string getName();

protected:
	Command(std::string name);

private:
	std::string name;
};
