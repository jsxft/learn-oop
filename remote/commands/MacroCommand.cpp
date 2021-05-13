#include <algorithm>

#include "MacroCommand.hpp"


MacroCommand::MacroCommand(std::initializer_list<Command::pointer> commands)
    : Command{"Macro Command"}, commands{commands}
{}

void MacroCommand::execute()
{
    std::for_each(commands.begin(), commands.end(), [](auto command) {
        command->execute();
    });
}

void MacroCommand::undo()
{
    std::for_each(commands.rbegin(), commands.rend(), [](auto command) {
        command->undo();
    });
}
