#pragma once

#include <string>
#include <memory>

#include "../pizzas/pizza.hpp"


class PizzaStore
{
public:
    std::unique_ptr<Pizza> orderPizza(std::string type);

protected:
    virtual std::unique_ptr<Pizza> createPizza(std::string item) = 0;
};
