#pragma once

#include "beverage.hpp"


class hello : public Beverage
{
public:
	double cost() const;
};
