#pragma once

#include <memory>
#include <string>

#include "simple_pizza_factory.hpp"


class PizzaStore
{
public:
	PizzaStore(SimplePizzaFactory& factory);
	std::unique_ptr<Pizza> orderPizza(std::string type);

private:
	SimplePizzaFactory& factory;
};
