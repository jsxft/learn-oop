#pragma once

#include <string>


class Pepperoni
{
public:
    virtual std::string toString() const = 0;
    operator std::string() const;
};
