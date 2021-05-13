#include "TVOffCommand.hpp"


TVOffCommand::TVOffCommand(TV& tv)
    : Command{"TV Off Command"}, tv{tv}
{}

void TVOffCommand::execute()
{
    tv.off();
}

void TVOffCommand::undo()
{
    tv.on();
}
