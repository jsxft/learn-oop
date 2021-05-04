#include "pizza_store.hpp"


PizzaStore::PizzaStore(SimplePizzaFactory& factory)
	: factory{factory}
{}

std::unique_ptr<Pizza> PizzaStore::orderPizza(std::string type)
{
	auto pizza {factory.createPizza(type)};

	pizza->prepare();
	pizza->bake();
	pizza->cut();
	pizza->box();

	return pizza;
}
