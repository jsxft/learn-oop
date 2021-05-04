#include <iostream>

#include "simple_pizza_factory.hpp"
#include "pizza_store.hpp"


int main()
{
	SimplePizzaFactory factory;
	PizzaStore store {factory};

	auto make_order ([&](std::string type) {
		auto pizza = store.orderPizza(type);
		std::cout << "We ordered a " << pizza->getName() << "\n";
		std::cout << std::string{*pizza} << '\n';
	});

	make_order("cheese");
	make_order("veggie");
}
