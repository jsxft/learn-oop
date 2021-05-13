#include <algorithm>
#include <sstream>
#include <iomanip>

#include "RemoteControl.hpp"
#include "../commands/NoCommand.hpp"


RemoteControl::RemoteControl()
{
    Command::pointer noCommand {new NoCommand};
    std::fill(std::begin(onCommands), std::end(onCommands), noCommand);
    std::fill(std::begin(offCommands), std::end(offCommands), noCommand);
}

void RemoteControl::setCommand(int slot, Command::pointer onCommand, Command::pointer offCommand)
{
    if (!onCommand) { onCommand.reset(new NoCommand); }
    if (!offCommand) { offCommand.reset(new NoCommand); }
    onCommands.at(slot).swap(onCommand);
    offCommands.at(slot).swap(offCommand);
}

void RemoteControl::onButtonWasPushed(int slot)
{
    onCommands.at(slot)->execute();
}

void RemoteControl::offButtonWasPushed(int slot)
{
    offCommands.at(slot)->execute();
}

std::string RemoteControl::toString()
{
    auto line ([](int length) { return std::string(length, '-'); });

    std::stringstream ss;
    ss << line(25) << " Remote Control " << line(25) << "\n";
    for (std::size_t i {0}; i < std::size(onCommands); ++i) {
        ss << "[slot " << i << "] ";
        ss << std::left << std::setw(30) << onCommands[i]->getName();
        ss << " " << offCommands[i]->getName() << '\n';
    }
    ss << line(66);
    return ss.str();
}

RemoteControl::operator std::string()
{
    return toString();
}
