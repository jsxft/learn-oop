#include <memory>
#include <vector>
#include <iostream>

#include "ducks/decoy_duck.hpp"
#include "ducks/mallard_duck.hpp"
#include "ducks/redhead_duck.hpp"
#include "ducks/rubber_duck.hpp"
#include "ducks/model_duck.hpp"
#include "ducks/fly_behavior/fly_rocket_powered.hpp"

int main()
{
	using DuckPtr = std::unique_ptr<Duck>;

	std::vector<DuckPtr> ducks;
	ducks.push_back(DuckPtr{new DecoyDuck});
	ducks.push_back(DuckPtr{new MallardDuck});
	ducks.push_back(DuckPtr{new RedheadDuck});
	ducks.push_back(DuckPtr{new RubberDuck});
	ducks.push_back(DuckPtr{new ModelDuck});

	for (auto &duck : ducks) {
		duck->display();
		duck->performFly();
		duck->performQuack();
		duck->swim();
		std::cout << '\n';
	}

	DuckPtr model {new ModelDuck};
	model->performFly();
	model->setFlyBehavior(new FlyRocketPowered);
	model->performFly();
}
