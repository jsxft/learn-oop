#include "NoCommand.hpp"


NoCommand::NoCommand()
    : Command{"No Command"}
{}

void NoCommand::execute()
{}

void NoCommand::undo()
{}
