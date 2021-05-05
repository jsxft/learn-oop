#include <iostream>

#include "pepperoni_pizza.hpp"


PepperoniPizza::PepperoniPizza(PizzaIngredientFactory* ingredientFactory)
    : ingredientFactory(ingredientFactory)
{}

void PepperoniPizza::prepare()
{
    std::cout << "Preparing " << name << '\n';
    dough = ingredientFactory->createDough();
    sauce = ingredientFactory->createSauce();
    cheese = ingredientFactory->createCheese();
    veggies = ingredientFactory->createVeggies();
    pepperoni = ingredientFactory->createPepperoni();
}
