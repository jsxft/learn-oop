#include <iostream>
#include <limits>

#include "statistics_display.hpp"


StatisticsDisplay::StatisticsDisplay(Subject& wd)
	: weatherData{wd},
	  minTemperature{std::numeric_limits<double>::max()},
	  maxTemperature{std::numeric_limits<double>::min()},
	  measurementsCount{0}
{
	weatherData.registerObserver(*this);
}

void StatisticsDisplay::update(double temp, double hum, double pres)
{
	minTemperature = std::min(temp, minTemperature);
	maxTemperature = std::max(temp, maxTemperature);
	avgTemperature = (avgTemperature * measurementsCount + temp) / (measurementsCount + 1);
	++measurementsCount;
	display();
}

void StatisticsDisplay::display()
{
	std::cout << "Avg/Max/Min temperature = " << avgTemperature << '/';
	std::cout << maxTemperature << '/' << minTemperature << '\n';
}
