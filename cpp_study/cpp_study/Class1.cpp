#include "Class1.h"

int main() {

	Stock s1("A", 10, 1000);
	Stock s2("B", 20, 1200);

	s1.show();
	s2.show();

	cout << "A�� B�� share_val�� ū ��ü��\n";
	s2.topval(s1).show();

	return 0;
}