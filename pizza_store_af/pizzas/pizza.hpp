#pragma once

#include <iostream>
#include <memory>
#include <vector>

#include "../doughs/dough.hpp"
#include "../sauces/sauce.hpp"
#include "../cheeses/cheese.hpp"
#include "../veggies/veggie.hpp"
#include "../pepperonies/pepperoni.hpp"
#include "../clams/clams.hpp"


class Pizza
{
public:
	virtual void prepare() = 0;
	virtual void bake();
	virtual void cut();
	virtual void box();

    void setName(const std::string &name);
	std::string getName() const;
	std::string toString() const;
	operator std::string() const;

protected:
	std::string name;

    std::unique_ptr<Dough> dough;
    std::unique_ptr<Sauce> sauce;
    std::unique_ptr<Cheese> cheese;
    std::vector<std::unique_ptr<Veggie>> veggies;
    std::unique_ptr<Pepperoni> pepperoni;
    std::unique_ptr<Clams> clam;
};
