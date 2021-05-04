#pragma once

#include "beverage.hpp"


class Decaf : public Beverage
{
public:
	Decaf();
	double cost() const;
};
