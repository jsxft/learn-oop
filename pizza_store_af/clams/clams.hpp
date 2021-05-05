#pragma once

#include <string>


class Clams
{
public:
    virtual std::string toString() const = 0;
    operator std::string() const;
};
