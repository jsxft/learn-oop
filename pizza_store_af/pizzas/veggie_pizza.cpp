#include <iostream>

#include "veggie_pizza.hpp"


VeggiePizza::VeggiePizza(PizzaIngredientFactory* ingredientFactory)
    : ingredientFactory(ingredientFactory)
{}

void VeggiePizza::prepare()
{
    std::cout << "Preparing " << name << '\n';
    dough = ingredientFactory->createDough();
    sauce = ingredientFactory->createSauce();
    cheese = ingredientFactory->createCheese();
    veggies = ingredientFactory->createVeggies();
}
