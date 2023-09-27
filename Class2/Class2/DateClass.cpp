#include "Header.h"
#include "DateClass.h"

void Date::showDate() {
	std::cout << "오늘은" << year_ << "년" << month_ << "월" << day_ << "일 입니다" << std::endl;
}