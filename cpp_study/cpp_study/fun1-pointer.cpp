#include <iostream>

using namespace std;

//�Լ��� �����ϴ� ������

int func(int);

int main() {

	int (*pf)(int);
	pf = func; // pf�� �Լ��� �ּ� ����

	cout << (*pf)(3) << endl;

	return 0;
}

int func(int n) {
	return n + 1;
}