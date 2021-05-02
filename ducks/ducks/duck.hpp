#pragma once

#include <memory>

#include "fly_behavior/fly_behavior.hpp"
#include "quack_behavior/quack_behavior.hpp"

class Duck
{
public:
	void performFly();
	void performQuack();
	virtual void display() = 0;
	void swim();

	void setFlyBehavior(FlyBehavior*);
	void setQuackBehavior(QuackBehavior*);

protected:
	using FlyBehaviorPtr = std::unique_ptr<FlyBehavior>;
	using QuackBehaviorPtr = std::unique_ptr<QuackBehavior>;
	
	FlyBehaviorPtr fly_behavior_ptr;
	QuackBehaviorPtr quack_behavior_ptr;

	Duck(FlyBehavior*, QuackBehavior*);
};
