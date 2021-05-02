#include <iostream>

#include "fly_behavior/fly_no_way.hpp"
#include "quack_behavior/quack.hpp"
#include "model_duck.hpp"


ModelDuck::ModelDuck() : Duck(new FlyNoWay, new Quack)
{}

void ModelDuck::display()
{
	std::cout << "I am a model duck.\n";
}