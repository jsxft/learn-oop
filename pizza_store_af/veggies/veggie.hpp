#pragma once

#include <string>


class Veggie
{
public:
    virtual std::string toString() const = 0;
    operator std::string() const;
};
