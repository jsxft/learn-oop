#pragma once

#include "condiment_decorator.hpp"


class Soy : public CondimentDecorator
{
public:
	Soy(Beverage* beverage);
	std::string getDescription() const;
	double cost() const;
};
