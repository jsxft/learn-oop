#include "simple_pizza_factory.hpp"
#include "pizzas/cheese_pizza.hpp"
#include "pizzas/pepperoni_pizza.hpp"
#include "pizzas/clam_pizza.hpp"
#include "pizzas/veggie_pizza.hpp"


std::unique_ptr<Pizza> SimplePizzaFactory::createPizza(std::string type)
{
	std::unique_ptr<Pizza> pizza;
	if		(type == "cheese")		{ pizza.reset(new CheesePizza);		}
	else if (type == "pepperoni")	{ pizza.reset(new PepperoniPizza); 	}
	else if (type == "clam")		{ pizza.reset(new ClamPizza); 		}
	else if (type == "veggie")		{ pizza.reset(new VeggiePizza);		}
	return pizza;
}
