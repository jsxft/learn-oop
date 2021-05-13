#include "Command.hpp"


Command::Command(std::string name)
    : name{name}
{}

std::string Command::getName()
{
    return name;
}
