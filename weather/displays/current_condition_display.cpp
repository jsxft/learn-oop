#include <iostream>

#include "current_condition_display.hpp"


CurrentConditionDisplay::CurrentConditionDisplay(Subject& wd)
	: weatherData{wd}
{
	weatherData.registerObserver(*this);
}

void CurrentConditionDisplay::update(double temp, double hum, double pres)
{
	temperature	= temp;
	humidity	= hum;
	display();
}

void CurrentConditionDisplay::display()
{
	std::cout << "Current conditions: " << temperature << "F degrees, " << humidity << "% humidity.\n";
}
