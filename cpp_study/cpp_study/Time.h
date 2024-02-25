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
	Time operator*(int);
	void show();
	friend Time operator*(int n, Time& t) {
		return t * n;
	}
};