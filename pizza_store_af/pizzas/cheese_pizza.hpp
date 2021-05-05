#pragma once

#include "pizza.hpp"
#include "../pizza_ingredient_factories/pizza_ingredient_factory.hpp"


class CheesePizza : public Pizza
{
public:
    CheesePizza(PizzaIngredientFactory* ingredientFactory);
    void prepare();

private:
    std::unique_ptr<PizzaIngredientFactory> ingredientFactory;
};
