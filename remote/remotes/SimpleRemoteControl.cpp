#include "SimpleRemoteControl.hpp"


void SimpleRemoteControl::setCommand(Command::pointer command)
{
    slot = std::move(command);
}

void SimpleRemoteControl::buttonWasPressed()
{
    slot->execute();
}
