#pragma once

#include "condiment_decorator.hpp"


class Milk : public CondimentDecorator
{
public:
	Milk(Beverage* beverage);
	std::string getDescription() const;
	double cost() const;
};
