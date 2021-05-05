#pragma once

#include <memory>
#include <vector>

#include "../doughs/dough.hpp"
#include "../sauces/sauce.hpp"
#include "../cheeses/cheese.hpp"
#include "../veggies/veggie.hpp"
#include "../pepperonies/pepperoni.hpp"
#include "../clams/clams.hpp"


class PizzaIngredientFactory
{
public:
    virtual std::unique_ptr<Dough> createDough() = 0;
    virtual std::unique_ptr<Sauce> createSauce() = 0;
    virtual std::unique_ptr<Cheese> createCheese() = 0;
    virtual std::vector<std::unique_ptr<Veggie>> createVeggies() = 0;
    virtual std::unique_ptr<Pepperoni> createPepperoni() = 0;
    virtual std::unique_ptr<Clams> createClam() = 0;
};
