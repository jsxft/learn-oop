#include "mocha.hpp"


Mocha::Mocha(Beverage* b)
{
	beverage.reset(b);
}

std::string Mocha::getDescription() const
{
	return beverage->getDescription() + ", Mocha";
}

double Mocha::cost() const
{
	return beverage->cost() + .20;
}
