#include <iostream>

#include "pizza_stores/ny_pizza_store.hpp"
#include "pizza_stores/chicago_pizza_store.hpp"


int main()
{
	std::unique_ptr<PizzaStore> nyStore {new NYPizzaStore};
	std::unique_ptr<PizzaStore> chicagoStore {new ChicagoPizzaStore};

	auto makeOrder ([](std::unique_ptr<PizzaStore>& store,
						std::string type, std::string name) {
		auto pizza = store->orderPizza(type);
		std::cout << name << " ordered a " << pizza->getName() << "\n";
		std::cout << std::string{*pizza} << '\n';
	});

	auto makeOrderEthan ([&](std::string type) {
		makeOrder(nyStore, type, "Ethan");
	});

	auto makeOrderJoel ([&](std::string type) {
		makeOrder(chicagoStore, type, "Joel");
	});

	for (const std::string &type : {"cheese", "veggie", "clam", "pepperoni"}) {
		makeOrderEthan(type);
		makeOrderJoel(type);
	}
}
