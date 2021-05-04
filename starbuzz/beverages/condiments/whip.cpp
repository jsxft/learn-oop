#include "whip.hpp"


Whip::Whip(Beverage* b)
{
	beverage.reset(b);
}

std::string Whip::getDescription() const
{
	return beverage->getDescription() + ", Whip";
}

double Whip::cost() const
{
	return beverage->cost() + .10;
}
