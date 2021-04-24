#include "TimeClass.h"
#include<iostream>
using namespace std;
void TimeClass::enter() {
	while (1)
	{
		cout << "\n Enter hour, minutes and seconds : ";
		int h, m, s;
		cin >> h >> m >> s;
		if (h < 24 && m < 60 && s < 60)
		{
			hour = h;
			minutes = m;
			second = s;
			break;
		}
		else cout << "\n Invalid, try again.";
	}
}
void TimeClass::display()
{
	cout << hour << "h" << minutes << "m" << second << "s";
}
void TimeClass::addSecond(int sec) {
	second += sec;
	if (second >= 60)
	{
		second -= 60;
		minutes++;
	}
	if (second < 0)
	{
		second += 60;
		minutes--;
	}
	if (minutes < 0)
	{
		minutes += 60;
		hour--;
	}
	if (hour < 0)
	{
		hour += 24;
	}
	if (minutes >= 60)
	{
		minutes -= 60;
		hour++;
	}
	if (hour >= 24)
	{
		hour -= 24;
	}
}
void TimeClass::addMinutes(int min) {
	minutes += min;
	if (minutes >= 60)
	{
		minutes -= 60;
		hour++;
	}
	if (hour >= 24)
	{
		hour -= 24;
	}
	if (minutes < 0)
	{
		minutes += 60;
		hour--;
	}
	if (hour < 0)
	{
		hour += 24;
	}
}
void TimeClass::addHour(int hr) {
	hour += hr;
	if (hour >= 24)
	{
		hour -= 24;
	}
	if (hour < 0)
	{
		hour += 24;
	}

}
int TimeClass::getHour()
{
	return this->hour;
}
int TimeClass::getMin()
{
	return this->minutes;
}
int TimeClass::getSec() {
	return this->second;
}
void TimeClass::setHour(int h)
{
	hour = h;
}
void TimeClass::setMinutes(int m)
{
	minutes = m;
}
void TimeClass::setSecond(int s)
{
	second = s;
}
