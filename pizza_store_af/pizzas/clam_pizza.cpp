#include <iostream>

#include "clam_pizza.hpp"


ClamPizza::ClamPizza(PizzaIngredientFactory* ingredientFactory)
    : ingredientFactory(ingredientFactory)
{}

void ClamPizza::prepare()
{
    std::cout << "Preparing " << name << '\n';
    dough = ingredientFactory->createDough();
    sauce = ingredientFactory->createSauce();
    cheese = ingredientFactory->createCheese();
    clam = ingredientFactory->createClam();
}
