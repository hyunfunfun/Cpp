#pragma once

#include <iostream>

class Time {
private:
	int hours;
	int mins;
public:
	Time();
	Time(int, int);
	void addHours(int);
	void addMins(int);
	Time operator+(Time&);
	void show();
};