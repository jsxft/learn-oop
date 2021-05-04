#pragma once

#include "beverage.hpp"


class DarkRoast : public Beverage
{
public:
	DarkRoast();
	double cost() const;
};
