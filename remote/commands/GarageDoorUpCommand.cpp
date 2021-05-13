#include "GarageDoorUpCommand.hpp"


GarageDoorUpCommand::GarageDoorUpCommand(GarageDoor& door)
    : Command{"Garage Door Up Command"}, door{door}
{}

void GarageDoorUpCommand::execute()
{
    door.up();
}

void GarageDoorUpCommand::undo()
{
    door.down();
}
