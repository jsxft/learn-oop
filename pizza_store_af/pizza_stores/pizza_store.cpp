#include <iostream>

#include "pizza_store.hpp"


std::unique_ptr<Pizza> PizzaStore::orderPizza(std::string type)
{
    auto pizza = createPizza(type);
    std::cout << "~~~ Making a " << pizza->getName() << " ~~~\n";
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();
    std::cout << std::string(pizza->getName().length() + 17, '~') << '\n';
    return pizza;
}
