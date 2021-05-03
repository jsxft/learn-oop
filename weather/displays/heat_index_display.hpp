#pragma once

#include "../observer.hpp"
#include "../subject.hpp"
#include "display_element.hpp"


class HeatIndexDisplay : public Observer, public DisplayElement
{
public:
	HeatIndexDisplay(Subject& weatherData);

	void update(double temp, double hum, double pres);
	void display();

private:
	Subject& weatherData;
	double heatIndex;

	double computeHeatIndex(double temperature, double humidity);
};
