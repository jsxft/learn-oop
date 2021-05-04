#pragma once

#include "beverage.hpp"


class HouseBlend : public Beverage
{
public:
	HouseBlend();
	double cost() const;
};
