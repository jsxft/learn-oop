#include <iostream>
#include <sstream>
#include "pizza.hpp"


void Pizza::prepare()
{
	std::cout << "~> Preparing " << name << '\n';
}

void Pizza::bake()
{
	std::cout << "~> Baking " << name << '\n';
}

void Pizza::cut()
{
	std::cout << "~> Cutting " << name << '\n';
}

void Pizza::box()
{
	std::cout << "~> Boxing " << name << '\n';
}

std::string Pizza::getName() const
{
	return name;
}

std::string Pizza::toString() const
{
	std::stringstream ss;
	ss << "---- " << name << " ----\n";
	ss << dough << '\n';
	ss << sauce << '\n';
	for (const auto &topping : toppings) {
		ss << topping << '\n';
	}
	ss << std::string(name.length() + 10, '-') << '\n';
	return ss.str();
}

Pizza::operator std::string() const
{
	return toString();
}
