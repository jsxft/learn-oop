#include "condiment_decorator.hpp"


void CondimentDecorator::setSize(Size s)
{
	beverage->setSize(s);
}

Beverage::Size CondimentDecorator::getSize() const
{
	return beverage->getSize();
}
