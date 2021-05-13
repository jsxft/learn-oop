#include <algorithm>

#include "RemoteControlLambda.hpp"


RemoteControlLambda::RemoteControlLambda()
{
    std::fill(onCommands.begin(), onCommands.end(), [] {});
    std::fill(offCommands.begin(), offCommands.end(), [] {});
}

void RemoteControlLambda::setCommand(int slot, command onCommand, command offCommand)
{
    onCommands.at(slot) = onCommand;
    offCommands.at(slot) = offCommand;
}

void RemoteControlLambda::onButtonWasPushed(int slot)
{
    onCommands.at(slot)();
}

void RemoteControlLambda::offButtonWasPushed(int slot)
{
    offCommands.at(slot)();
}
