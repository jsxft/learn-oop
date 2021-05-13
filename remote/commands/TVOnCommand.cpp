#include "TVOnCommand.hpp"


TVOnCommand::TVOnCommand(TV& tv)
    : Command{"TV On Command"}, tv{tv}
{}

void TVOnCommand::execute()
{
    tv.on();
    tv.setInputChannel();
}

void TVOnCommand::undo()
{
    tv.off();
}
