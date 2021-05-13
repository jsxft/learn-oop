#include <iostream>

#include "Light.hpp"


Light::Light(const std::string& location)
	: location{location}
{}

void Light::on()
{
	std::cout << location << " light is on\n";
}

void Light::off()
{
	std::cout << location << " light is off\n";
}
