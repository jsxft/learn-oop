#include "weather_data.hpp"
#include "displays/current_condition_display.hpp"
#include "displays/statistics_display.hpp"
#include "displays/forecast_display.hpp"
#include "displays/heat_index_display.hpp"


int main()
{
	WeatherData wd;
	CurrentConditionDisplay ccd(wd);
	StatisticsDisplay sd(wd);
	ForecastDisplay fd(wd);
	HeatIndexDisplay hid(wd);

	wd.setMeasurements(80, 65, 30.4);
	wd.setMeasurements(82, 70, 29.2);
	wd.setMeasurements(78, 90, 29.2);
}
