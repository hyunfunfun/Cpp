#pragma once
#include "Header.h"

class Date {
	int year_;
	int month_;
	int day_;

public:
	void showDate();
	
	Date() {
		std::cout << "�⺻ ������ ȣ��:" << std::endl;
		year_ = 2023;
		month_ = 9;
		day_ = 27;
	}
	Date(int year,int month, int day) {
		std::cout << "���� 3���� ������ ȣ��:" << std::endl;
		year_ = year;
		month_ = month;
		day_ = day;
	}
};