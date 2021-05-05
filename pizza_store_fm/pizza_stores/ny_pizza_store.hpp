#pragma once

#include "pizza_store.hpp"


class NYPizzaStore : public PizzaStore
{
private:
    std::unique_ptr<Pizza> createPizza(std::string type);
};
