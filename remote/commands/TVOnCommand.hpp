#pragma once

#include "Command.hpp"
#include "../devices/TV.hpp"


class TVOnCommand : public Command
{
public:
    TVOnCommand(TV& tv);
    void execute();
    void undo();

private:
    TV& tv;
};
