#pragma once

#include <string>
#include <vector>


class Pizza
{
public:
	virtual void prepare();
	virtual void bake();
	virtual void cut();
	virtual void box();

	std::string getName() const;
	std::string toString() const;
	operator std::string() const;

protected:
	std::string name;
	std::string dough;
	std::string sauce;
	std::vector<std::string> toppings;
};
