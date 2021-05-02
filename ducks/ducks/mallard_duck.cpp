#include <iostream>

#include "fly_behavior/fly_with_wings.hpp"
#include "quack_behavior/quack.hpp"
#include "mallard_duck.hpp"


MallardDuck::MallardDuck() : Duck(new FlyWithWings, new Quack)
{}

void MallardDuck::display()
{
	std::cout << "I am a real Mallard duck.\n";
}
