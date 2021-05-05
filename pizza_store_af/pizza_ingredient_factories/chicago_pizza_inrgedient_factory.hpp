#pragma once

#include "pizza_ingredient_factory.hpp"


class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory
{
public:
    std::unique_ptr<Dough> createDough();
    std::unique_ptr<Sauce> createSauce();
    std::unique_ptr<Cheese> createCheese();
    std::vector<std::unique_ptr<Veggie>> createVeggies();
    std::unique_ptr<Pepperoni> createPepperoni();
    std::unique_ptr<Clams> createClam();
};
