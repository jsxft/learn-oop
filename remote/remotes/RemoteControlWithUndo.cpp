#include <algorithm>
#include <sstream>
#include <iomanip>

#include "RemoteControlWithUndo.hpp"
#include "../commands/NoCommand.hpp"


RemoteControlWithUndo::RemoteControlWithUndo()
{
    Command::pointer noCommand {new NoCommand};
    std::fill(std::begin(onCommands), std::end(onCommands), noCommand);
    std::fill(std::begin(offCommands), std::end(offCommands), noCommand);
    lastCommand = noCommand;
}

void RemoteControlWithUndo::setCommand(int slot, Command::pointer onCommand, Command::pointer offCommand)
{
    if (!onCommand) { onCommand.reset(new NoCommand); }
    if (!offCommand) { offCommand.reset(new NoCommand); }

    onCommands.at(slot).swap(onCommand);
    offCommands.at(slot).swap(offCommand);
}

void RemoteControlWithUndo::onButtonWasPushed(int slot)
{
    onCommands.at(slot)->execute();
    lastCommand = onCommands[slot];
}

void RemoteControlWithUndo::offButtonWasPushed(int slot)
{
    offCommands.at(slot)->execute();
    lastCommand = offCommands[slot];
}

void RemoteControlWithUndo::undoButtonWasPushed()
{
    lastCommand->undo();
    lastCommand.reset(new NoCommand);
}

std::string RemoteControlWithUndo::toString()
{
    auto line ([](int length) { return std::string(length, '-'); });

    std::stringstream ss;
    ss << line(25) << " Remote Control " << line(25) << "\n";
    for (std::size_t i {0}; i < onCommands.size(); ++i) {
        ss << "[slot " << i << "] ";
        ss << std::left << std::setw(30) << onCommands[i]->getName();
        ss << " " << offCommands[i]->getName() << '\n';
    }
    ss << "[undo] " << lastCommand->getName() << '\n';
    ss << line(66);
    return ss.str();
}

RemoteControlWithUndo::operator std::string()
{
    return toString();
}
