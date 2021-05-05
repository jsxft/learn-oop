#pragma once

#include <string>


class Dough
{
public:
    virtual std::string toString() const = 0;
    operator std::string() const;
};
