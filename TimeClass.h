#pragma once
class TimeClass
{
	int hour;
	int minutes;
	int second;
public:
	TimeClass()
	{
		hour = 0;
		minutes = 0;
		second = 0;
}
	~TimeClass(){}
	void enter();
	void display();
	void addSecond(int sec);
	void addMinutes(int min);
	void addHour(int hr);
	int getHour();
	int getMin();
	int getSec();
	void setHour(int h);
	void setMinutes(int m);
	void setSecond(int s);
};

