#include "Time.h"
#include <iostream>

using namespace std;

int main() {
	Time day1(1, 40);
	Time day2(2, 30);
	
	day1.show();
	day2.show();

	Time total;
	total = day1.operator+(day2);

	Time total2;
	total2 = day1 + day2; // ��ü +�� ����ϸ� operator+�Լ��� ȣ��ȴ�


	total.show();
	total2.show();

	return 0;
}