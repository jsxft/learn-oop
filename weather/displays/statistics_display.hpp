#pragma once

#include "../observer.hpp"
#include "../subject.hpp"
#include "display_element.hpp"


class StatisticsDisplay : public Observer, public DisplayElement
{
public:
	StatisticsDisplay(Subject& weatherData);

	void update(double temp, double hum, double pres);
	void display();

private:
	Subject& weatherData;
	double minTemperature;
	double maxTemperature;
	double avgTemperature;
	double measurementsCount;
};
