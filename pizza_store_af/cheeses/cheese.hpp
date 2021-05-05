#pragma once

#include <string>


class Cheese
{
public:
    virtual std::string toString() const = 0;
    operator std::string() const;
};
