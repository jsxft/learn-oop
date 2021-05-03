#pragma once

#include <memory>

#include "../observer.hpp"
#include "../subject.hpp"
#include "display_element.hpp"


class CurrentConditionDisplay : public Observer, public DisplayElement
{
public:
	CurrentConditionDisplay(Subject& weatherData);

	void update(double temp, double hum, double pres);
	void display();

private:
	Subject& weatherData;
	double temperature;
	double humidity;
};
