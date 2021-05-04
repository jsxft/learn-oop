#include "beverage.hpp"


std::string Beverage::getDescription() const
{
	return description;
}

void Beverage::setSize(Size s)
{
	size = s;
}

Beverage::Size Beverage::getSize() const
{
	return size;
}
