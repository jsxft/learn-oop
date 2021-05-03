#pragma once

#include "../observer.hpp"
#include "../subject.hpp"
#include "display_element.hpp"


class ForecastDisplay : public Observer, public DisplayElement
{
public:
	ForecastDisplay(Subject& weatherData);

	void update(double temp, double hum, double pres);
	void display();

private:
	Subject& weatherData;
	double currentPressure;
	double lastPressure;
};
