#include "soy.hpp"


Soy::Soy(Beverage* b)
{
	beverage.reset(b);
}

std::string Soy::getDescription() const
{
	return beverage->getDescription() + ", Soy";
}

double Soy::cost() const
{
	double cost = beverage->cost();

	switch(getSize()) {
		case Beverage::Size::TALL:		cost += .10;	break;
		case Beverage::Size::GRANDE:	cost += .15;	break;
		case Beverage::Size::VENTI:		cost += .20;	break;
	}

	return cost;
}
