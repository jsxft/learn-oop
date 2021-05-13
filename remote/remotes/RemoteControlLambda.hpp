#pragma once

#include <array>
#include <memory>
#include <functional>


class RemoteControlLambda
{
public:
    using command = std::function<void()>;

    RemoteControlLambda();

    void setCommand(int slot, command onCommand, command offCommand);
    void onButtonWasPushed(int slot);
    void offButtonWasPushed(int slot);

private:
    std::array<command, 7> onCommands;
    std::array<command, 7> offCommands;
};
