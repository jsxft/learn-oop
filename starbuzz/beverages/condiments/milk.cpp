#include "milk.hpp"


Milk::Milk(Beverage* b)
{
	beverage.reset(b);
}

std::string Milk::getDescription() const
{
	return beverage->getDescription() + ", Milk";
}

double Milk::cost() const
{
	return beverage->cost() + .10;
}
