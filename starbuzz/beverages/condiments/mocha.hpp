#pragma once

#include "condiment_decorator.hpp"


class Mocha : public CondimentDecorator
{
public:
	Mocha(Beverage* beverage);
	std::string getDescription() const;
	double cost() const;
};
