#pragma once

#include <string>


class Light
{
public:
	Light(const std::string& location);

	void on();
	void off();

private:
	std::string location;
};
