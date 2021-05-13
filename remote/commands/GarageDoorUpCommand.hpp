#pragma once

#include "Command.hpp"
#include "../devices/GarageDoor.hpp"


class GarageDoorUpCommand : public Command
{
public:
    GarageDoorUpCommand(GarageDoor& door);
    void execute();
    void undo();

private:
    GarageDoor& door;
};
