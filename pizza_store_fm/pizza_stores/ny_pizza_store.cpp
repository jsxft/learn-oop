#include "ny_pizza_store.hpp"

#include "../pizzas/ny_style/cheese_pizza.hpp"
#include "../pizzas/ny_style/veggie_pizza.hpp"
#include "../pizzas/ny_style/clam_pizza.hpp"
#include "../pizzas/ny_style/pepperoni_pizza.hpp"


std::unique_ptr<Pizza> NYPizzaStore::createPizza(std::string type)
{
    std::unique_ptr<Pizza> pizza;

    if      (type == "cheese")      { pizza.reset(new NYStyleCheesePizza);       }
    else if (type == "veggie")      { pizza.reset(new NYStyleVeggiePizza);       }
    else if (type == "clam")        { pizza.reset(new NYStyleClamPizza);         }
    else if (type == "pepperoni")   { pizza.reset(new NYStylePepperoniPizza);    }

    return pizza;
}
