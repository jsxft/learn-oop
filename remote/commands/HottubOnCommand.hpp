#pragma once

#include "Command.hpp"
#include "../devices/Hottub.hpp"


class HottubOnCommand : public Command
{
public:
    HottubOnCommand(Hottub& hottub);
    void execute();
    void undo();

private:
    Hottub& hottub;
};
