#pragma once

#include <string>


class Sauce
{
public:
    virtual std::string toString() const = 0;
    operator std::string() const;
};
