#pragma once

#include <memory>
#include <string>

#include "../pizzas/pizza.hpp"


class PizzaStore
{
public:
	virtual std::unique_ptr<Pizza> orderPizza(std::string type);

protected:
	virtual std::unique_ptr<Pizza> createPizza(std::string type) = 0;
};
