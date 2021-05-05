#pragma once

#include "pizza_store.hpp"


class ChicagoPizzaStore : public PizzaStore
{
private:
    std::unique_ptr<Pizza> createPizza(std::string type);
};
