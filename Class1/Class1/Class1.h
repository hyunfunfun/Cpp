#pragma once
#include "Header.h"

class Date {
	int year_;
	int month_;
	int day_;

public:
	Date(int year, int month, int day) {
		year_ = year;
		month_ = month;
		day_ = day;
	}
	void SetDate(int year, int month, int date);
	void AddDay(int inc);
	void AddMonth(int inc);
	void AddYear(int inc);

	int GetCurrentMonthTotalDays(int year, int month);
	void ShowDate();
};