#include "ny_pizza_store.hpp"
#include "../pizza_ingredient_factories/ny_pizza_inrgedient_factory.hpp"
#include "../pizzas/cheese_pizza.hpp"
#include "../pizzas/clam_pizza.hpp"
#include "../pizzas/pepperoni_pizza.hpp"
#include "../pizzas/veggie_pizza.hpp"


std::unique_ptr<Pizza> NYPizzaStore::createPizza(std::string item)
{
    std::unique_ptr<Pizza> pizza;

    if (item == "cheese") {
        pizza.reset(new CheesePizza(new NYPizzaIngredientFactory));
        pizza->setName("New York Style Cheese Pizza");
    } else if (item == "veggie") {
        pizza.reset(new VeggiePizza(new NYPizzaIngredientFactory));
        pizza->setName("New York Style Veggie Pizza");
    } else if (item == "clam") {
        pizza.reset(new ClamPizza(new NYPizzaIngredientFactory));
        pizza->setName("New York Style Clam Pizza");
    } else if (item == "pepperoni") {
        pizza.reset(new PepperoniPizza(new NYPizzaIngredientFactory));
        pizza->setName("New York Style Pepperoni Pizza");
    }

    return pizza;
}
