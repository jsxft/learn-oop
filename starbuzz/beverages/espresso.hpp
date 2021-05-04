#pragma once

#include "beverage.hpp"


class Espresso : public Beverage
{
public:
	Espresso();
	double cost() const;
};
