#include "Header.h"
#include "Class1.h"

int main() {

	Date day(2023, 9, 24);//생성자

	//setdate삭제

	day.ShowDate();

	day.AddDay(30);
	day.ShowDate();

	day.AddDay(2000);
	day.ShowDate();

	day.AddDay(29);
	day.ShowDate();

	day.AddDay(2500);
	day.ShowDate();

	return 0;
}