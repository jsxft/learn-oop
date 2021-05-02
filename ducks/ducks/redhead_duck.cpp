#include <iostream>

#include "fly_behavior/fly_with_wings.hpp"
#include "quack_behavior/quack.hpp"
#include "redhead_duck.hpp"


RedheadDuck::RedheadDuck() : Duck(new FlyWithWings, new Quack)
{}

void RedheadDuck::display()
{
	std::cout << "I am a real Redhead duck.\n";
}
