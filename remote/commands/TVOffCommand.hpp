#pragma once

#include "Command.hpp"
#include "../devices/TV.hpp"


class TVOffCommand : public Command
{
public:
    TVOffCommand(TV& tv);
    void execute();
    void undo();

private:
    TV& tv;
};
