#pragma once

#include <set>
#include <memory>

#include "subject.hpp"


class WeatherData : public Subject
{
public:
	double getTemperature();
	double getHumidity();
	double getPressure();

	void measurementsChanged();
	void setMeasurements(double temp, double hum, double pres);

	void registerObserver(Observer &observer);
	void removeObserver(Observer &observer);
	void notifyObservers();

private:
	double temperature;
	double humidity;
	double pressure;
	std::set<Observer*> observers;
};
