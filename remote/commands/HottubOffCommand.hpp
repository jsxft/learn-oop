#pragma once

#include "Command.hpp"
#include "../devices/Hottub.hpp"


class HottubOffCommand : public Command
{
public:
    HottubOffCommand(Hottub& hottub);
    void execute();
    void undo();

private:
    Hottub& hottub;
};
