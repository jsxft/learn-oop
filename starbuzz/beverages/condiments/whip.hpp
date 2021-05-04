#pragma once

#include "condiment_decorator.hpp"


class Whip : public CondimentDecorator
{
public:
	Whip(Beverage* beverage);
	std::string getDescription() const;
	double cost() const;
};
