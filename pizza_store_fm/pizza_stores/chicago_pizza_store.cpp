#include "chicago_pizza_store.hpp"

#include "../pizzas/chicago_style/cheese_pizza.hpp"
#include "../pizzas/chicago_style/veggie_pizza.hpp"
#include "../pizzas/chicago_style/clam_pizza.hpp"
#include "../pizzas/chicago_style/pepperoni_pizza.hpp"


std::unique_ptr<Pizza> ChicagoPizzaStore::createPizza(std::string type)
{
    std::unique_ptr<Pizza> pizza;

    if      (type == "cheese")      { pizza.reset(new ChicagoStyleCheesePizza);       }
    else if (type == "veggie")      { pizza.reset(new ChicagoStyleVeggiePizza);       }
    else if (type == "clam")        { pizza.reset(new ChicagoStyleClamPizza);         }
    else if (type == "pepperoni")   { pizza.reset(new ChicagoStylePepperoniPizza);    }

    return pizza;
}
