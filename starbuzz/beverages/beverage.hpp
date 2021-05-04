#pragma once

#include <iostream>


class Beverage
{
public:
	enum class Size { TALL, GRANDE, VENTI };

	virtual std::string getDescription() const;
	virtual double cost() const = 0;
	
	virtual void setSize(Size size);
	virtual Size getSize() const;

protected:
	std::string description;

private:
	Size size;
};
