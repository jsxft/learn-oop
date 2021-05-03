#include <algorithm>

#include "weather_data.hpp"


double WeatherData::getTemperature()
{
	return temperature;
}

double WeatherData::getHumidity()
{
	return humidity;
}

double WeatherData::getPressure()
{
	return pressure;
}

void WeatherData::measurementsChanged()
{
	notifyObservers();
}

void WeatherData::setMeasurements(double temp, double hum, double pres)
{
	temperature = temp;
	humidity	= hum;
	pressure	= pres;
	measurementsChanged();
}

void WeatherData::registerObserver(Observer &observer)
{
	observers.insert(&observer);
}

void WeatherData::removeObserver(Observer &observer)
{
	observers.erase(&observer);
}

void WeatherData::notifyObservers()
{
	std::for_each(observers.begin(), observers.end(), [=](Observer* observer) {
		observer->update(temperature, humidity, pressure);
	});
}
