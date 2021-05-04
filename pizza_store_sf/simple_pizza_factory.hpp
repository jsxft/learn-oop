#pragma once

#include <string>
#include <memory>

#include "pizzas/pizza.hpp"


class SimplePizzaFactory
{
public:
	std::unique_ptr<Pizza> createPizza(std::string type);
};
