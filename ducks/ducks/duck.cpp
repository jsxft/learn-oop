#include <iostream>

#include "duck.hpp"


void Duck::performFly()
{
	fly_behavior_ptr->fly();
}

void Duck::performQuack()
{
	quack_behavior_ptr->quack();
}

void Duck::swim()
{
	std::cout << "I am swimming.\n";
}

void Duck::setFlyBehavior(FlyBehavior* fbp)
{
	fly_behavior_ptr.reset(fbp);
}

void Duck::setQuackBehavior(QuackBehavior* qbp)
{
	quack_behavior_ptr.reset(qbp);
}

Duck::Duck(FlyBehavior* fbp, QuackBehavior* qbp)
	: fly_behavior_ptr{fbp},
	  quack_behavior_ptr{qbp}
{}
