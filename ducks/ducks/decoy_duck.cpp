#include <iostream>

#include "fly_behavior/fly_no_way.hpp"
#include "quack_behavior/mute_quack.hpp"
#include "decoy_duck.hpp"


DecoyDuck::DecoyDuck() : Duck(new FlyNoWay, new MuteQuack)
{}

void DecoyDuck::display()
{
	std::cout << "I am a decoy duck.\n";
}
