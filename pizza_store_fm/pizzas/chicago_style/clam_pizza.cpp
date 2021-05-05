#include <iostream>

#include "clam_pizza.hpp"

ChicagoStyleClamPizza::ChicagoStyleClamPizza()
{
	name = "Chicago Style Clam Pizza";
	dough = "Extra Thick Crust Dough";
	sauce = "Plum Tomato Sauce";
	
	toppings.push_back("Shredded Mozzarella Cheese");
	toppings.push_back("Frozen Clams from Chesapeake Bay");
}

void ChicagoStyleClamPizza::cut()
{
	std::cout << "Cutting the pizza into square slices\n";
}
