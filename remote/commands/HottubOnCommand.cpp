#include "HottubOnCommand.hpp"


HottubOnCommand::HottubOnCommand(Hottub& hottub)
    : Command{"Hottub On Command"}, hottub{hottub}
{}

void HottubOnCommand::execute()
{
    hottub.on();
    hottub.heat();
    hottub.bubblesOn();
}

void HottubOnCommand::undo()
{
    hottub.cool();
    hottub.off();
}
