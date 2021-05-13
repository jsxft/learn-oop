#pragma once

#include <vector>

#include "Command.hpp"


class MacroCommand : public Command
{
public:
    MacroCommand(std::initializer_list<Command::pointer> commands);
    void execute();
    void undo();

private:
    std::vector<Command::pointer> commands;
};
