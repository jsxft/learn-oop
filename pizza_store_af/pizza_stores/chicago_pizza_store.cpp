#include "chicago_pizza_store.hpp"
#include "../pizza_ingredient_factories/chicago_pizza_inrgedient_factory.hpp"
#include "../pizzas/cheese_pizza.hpp"
#include "../pizzas/clam_pizza.hpp"
#include "../pizzas/pepperoni_pizza.hpp"
#include "../pizzas/veggie_pizza.hpp"


std::unique_ptr<Pizza> ChicagoPizzaStore::createPizza(std::string item)
{
    std::unique_ptr<Pizza> pizza;

    if (item == "cheese") {
        pizza.reset(new CheesePizza(new ChicagoPizzaIngredientFactory));
        pizza->setName("Chicago Style Cheese Pizza");
    } else if (item == "veggie") {
        pizza.reset(new VeggiePizza(new ChicagoPizzaIngredientFactory));
        pizza->setName("Chicago Style Veggie Pizza");
    } else if (item == "clam") {
        pizza.reset(new ClamPizza(new ChicagoPizzaIngredientFactory));
        pizza->setName("Chicago Style Clam Pizza");
    } else if (item == "pepperoni") {
        pizza.reset(new PepperoniPizza(new ChicagoPizzaIngredientFactory));
        pizza->setName("Chicago Style Pepperoni Pizza");
    }

    return pizza;
}
