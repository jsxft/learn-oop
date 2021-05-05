#include "chicago_pizza_inrgedient_factory.hpp"
#include "../doughs/thick_crust.hpp"
#include "../sauces/plum_tomato.hpp"
#include "../cheeses/mozzarella.hpp"
#include "../veggies/black_olives.hpp"
#include "../veggies/spinach.hpp"
#include "../veggies/eggplant.hpp"
#include "../pepperonies/sliced_pepperoni.hpp"
#include "../clams/frozen_clams.hpp"


std::unique_ptr<Dough> ChicagoPizzaIngredientFactory::createDough()
{
    return std::unique_ptr<Dough> {new ThickCrustDough};
}

std::unique_ptr<Sauce> ChicagoPizzaIngredientFactory::createSauce()
{
    return std::unique_ptr<Sauce> {new PlumTomatoSauce};
}

std::unique_ptr<Cheese> ChicagoPizzaIngredientFactory::createCheese()
{
    return std::unique_ptr<Cheese> {new MozzarellaCheese};
}

std::vector<std::unique_ptr<Veggie>> ChicagoPizzaIngredientFactory::createVeggies()
{
    std::vector<std::unique_ptr<Veggie>> veggies;
    veggies.emplace_back(new BlackOlives);
    veggies.emplace_back(new Spinach);
    veggies.emplace_back(new Eggplant);
    return veggies;
}

std::unique_ptr<Pepperoni> ChicagoPizzaIngredientFactory::createPepperoni()
{
    return std::unique_ptr<Pepperoni> {new SlicedPepperoni};
}

std::unique_ptr<Clams> ChicagoPizzaIngredientFactory::createClam()
{
    return std::unique_ptr<Clams> {new FrozenClams};
}
