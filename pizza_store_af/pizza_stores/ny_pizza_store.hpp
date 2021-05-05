#pragma once

#include "pizza_store.hpp"


class NYPizzaStore : public PizzaStore
{
protected:
    std::unique_ptr<Pizza> createPizza(std::string item);
};
