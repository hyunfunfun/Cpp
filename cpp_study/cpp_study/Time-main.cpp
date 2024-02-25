#include "Time.h"
#include <iostream>

using namespace std;

int main() {
	/*Time day1(1, 40);
	Time day2(2, 30);
	
	day1.show();
	day2.show();

	Time total;
	total = day1.operator+(day2);

	Time total2;
	total2 = day1 + day2; // 객체 +를 사용하면 operator+함수가 호출된다


	total.show();
	total2.show();*/

	//friend
	Time t1(1, 20);
	Time t2;

	t2 = 3 * t1;
	//t1 = operator*(3, t1);
	t2.show();

	return 0;
}