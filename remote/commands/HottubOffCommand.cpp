#include "HottubOffCommand.hpp"


HottubOffCommand::HottubOffCommand(Hottub& hottub)
    : Command{"Hottub Off Command"}, hottub{hottub}
{}

void HottubOffCommand::execute()
{
    hottub.cool();
    hottub.off();
}

void HottubOffCommand::undo()
{
    hottub.on();
    hottub.heat();
    hottub.bubblesOn();
}
