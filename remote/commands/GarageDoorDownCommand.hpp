#pragma once

#include "Command.hpp"
#include "../devices/GarageDoor.hpp"


class GarageDoorDownCommand : public Command
{
public:
    GarageDoorDownCommand(GarageDoor& door);
    void execute();
    void undo();

private:
    GarageDoor& door;
};
