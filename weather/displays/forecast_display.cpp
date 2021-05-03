#include <iostream>

#include "forecast_display.hpp"


ForecastDisplay::ForecastDisplay(Subject& wd)
	: weatherData{wd}, currentPressure{29.92}
{
	weatherData.registerObserver(*this);
}

void ForecastDisplay::update(double temp, double hum, double pres)
{
	lastPressure = currentPressure;
	currentPressure = pres;
	display();
}

void ForecastDisplay::display()
{
	std::cout << "Forecast: ";

	if (currentPressure > lastPressure) {
		std::cout << "Improving weather on the way!\n";
	} else if (currentPressure < lastPressure) {
		std::cout << "Watch out for cooler, rainy weather.\n";
	} else {
		std::cout << "More of the same.\n";
	}
}
