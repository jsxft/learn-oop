#include "pizza_store.hpp"


std::unique_ptr<Pizza> PizzaStore::orderPizza(std::string type)
{
	auto pizza {createPizza(type)};

	pizza->prepare();
	pizza->bake();
	pizza->cut();
	pizza->box();

	return pizza;
}
