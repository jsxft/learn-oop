#include "ny_pizza_inrgedient_factory.hpp"
#include "../doughs/thin_crust.hpp"
#include "../sauces/marinara.hpp"
#include "../cheeses/reggiano.hpp"
#include "../veggies/garlic.hpp"
#include "../veggies/onion.hpp"
#include "../veggies/mushroom.hpp"
#include "../veggies/red_pepper.hpp"
#include "../pepperonies/sliced_pepperoni.hpp"
#include "../clams/fresh_clams.hpp"


std::unique_ptr<Dough> NYPizzaIngredientFactory::createDough()
{
    return std::unique_ptr<Dough> {new ThinCrustDough};
}

std::unique_ptr<Sauce> NYPizzaIngredientFactory::createSauce()
{
    return std::unique_ptr<Sauce> {new MarinaraSauce};
}

std::unique_ptr<Cheese> NYPizzaIngredientFactory::createCheese()
{
    return std::unique_ptr<Cheese> {new ReggianoCheese};
}

std::vector<std::unique_ptr<Veggie>> NYPizzaIngredientFactory::createVeggies()
{
    std::vector<std::unique_ptr<Veggie>> veggies;
    veggies.emplace_back(new Garlic);
    veggies.emplace_back(new Onion);
    veggies.emplace_back(new Mushroom);
    veggies.emplace_back(new RedPepper);
    return veggies;
}

std::unique_ptr<Pepperoni> NYPizzaIngredientFactory::createPepperoni()
{
    return std::unique_ptr<Pepperoni> {new SlicedPepperoni};
}

std::unique_ptr<Clams> NYPizzaIngredientFactory::createClam()
{
    return std::unique_ptr<Clams> {new FreshClams};
}
