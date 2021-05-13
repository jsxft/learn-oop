#pragma once

#include "Command.hpp"


class NoCommand : public Command
{
public:
    NoCommand();
    void execute();
    void undo();
};
