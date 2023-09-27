#include "Header.h"
#include "DateClass.h"

int main() {
	Date day=Date();
	Date day2(2021, 4, 26);

	day.showDate();
	day2.showDate();

	return 0;
}
