#include <iostream>

#include "fly_behavior/fly_no_way.hpp"
#include "quack_behavior/squeak.hpp"
#include "rubber_duck.hpp"


RubberDuck::RubberDuck() : Duck(new FlyNoWay, new Squeak)
{}

void RubberDuck::display()
{
	std::cout << "I am a rubber duck.\n";
}
