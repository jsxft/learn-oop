#include "GarageDoorDownCommand.hpp"


GarageDoorDownCommand::GarageDoorDownCommand(GarageDoor& door)
    : Command{"Garage Door Down Command"}, door{door}
{}

void GarageDoorDownCommand::execute()
{
    door.down();
}

void GarageDoorDownCommand::undo()
{
    door.up();
}
