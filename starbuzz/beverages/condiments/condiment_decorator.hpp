#pragma once

#include <memory>

#include "../beverage.hpp"


class CondimentDecorator : public Beverage
{
public:
	std::string getDescription() const = 0;
	double cost() const				   = 0;

	void setSize(Size size);
	Size getSize() const;

protected:
	std::unique_ptr<Beverage> beverage;
};
