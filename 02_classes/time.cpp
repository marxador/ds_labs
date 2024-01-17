#include <iostream>
#include "time.h"

// Constructors
Time::Time() 
{
	hour = 0;
	minute = 0;
	second = 0;
}
Time::Time(int aHour, int aMinute, int aSecond)
{
	hour = aHour;
	minute = aMinute;
	second = aSecond;
}

// Getters
int Time::getHour() const 
{
	return hour;
}
int Time::getMinute() const
{
	return minute;
}
int Time::getSecond() const
{
	return second;
}

// Setters
void Time::setHour(int h)
{
	hour = h;
}
void Time::setMinute(int m)
{
	minute = m;
}
void Time::setSecond(int s)
{
	second = s;
}

// Member functions
void Time::PrintAMPM() const
{
	// Creates temp variables
	std::string hourStr = std::to_string(hour);
	std::string minuteStr = std::to_string(minute);
	std::string secondStr = std::to_string(second);

	// Adds zeros infront if needed
	if (hour % 12 < 10)
	{
		hourStr = "0" + std::to_string(hour % 12);
	}
	if (minute < 10)
	{
		minuteStr = "0" + std::to_string(minute);
	}
	if (second < 10)
	{
		secondStr = "0" + std::to_string(second);
	}

	if (hour >= 12)
	{
		std::cout << hourStr << ":" << minuteStr << ":" << secondStr << " pm" << std::endl;
	}
	else if (hour < 12)
	{
		std::cout << hourStr << ":" << minuteStr << ":" << secondStr << " am" << std::endl;
	}
}