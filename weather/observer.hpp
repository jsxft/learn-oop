#pragma once


class Observer
{
public:
	virtual void update(double temp, double hum, double pres) = 0;
};
