#include <iostream>

#include "cheese_pizza.hpp"


CheesePizza::CheesePizza(PizzaIngredientFactory* ingredientFactory)
    : ingredientFactory(ingredientFactory)
{}

void CheesePizza::prepare()
{
    std::cout << "Preparing " << name << '\n';
    dough = ingredientFactory->createDough();
    sauce = ingredientFactory->createSauce();
    cheese = ingredientFactory->createCheese();
}
