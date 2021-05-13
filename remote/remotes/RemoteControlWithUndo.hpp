#pragma once

#include <array>
#include <memory>

#include "../commands/Command.hpp"


class RemoteControlWithUndo
{
public:
    RemoteControlWithUndo();

    void setCommand(int slot, Command::pointer onCommand, Command::pointer offCommand);
    void onButtonWasPushed(int slot);
    void offButtonWasPushed(int slot);
    void undoButtonWasPushed();

    std::string toString();
    operator std::string();

private:
    std::array<Command::pointer, 7> onCommands;
    std::array<Command::pointer, 7> offCommands;
    Command::pointer lastCommand;
};
