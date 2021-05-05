#include <iostream>
#include <sstream>
#include "pizza.hpp"


void Pizza::prepare()
{
	std::cout << "Prepare " << name << '\n';
	std::cout << "Tossing dough...\n";
	std::cout << "Adding sauce...\n";
	std::cout << "Adding toppings:\n";
	for (const auto &topping : toppings) {
		std::cout << "    " << topping << '\n';
	}
}

void Pizza::bake()
{
	std::cout << "Bake for 25 minutes at 350\n";
}

void Pizza::cut()
{
	std::cout << "Cut the pizza into diagonal slices\n";
}

void Pizza::box()
{
	std::cout << "Place pizza in official PizzaStore box\n";
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
