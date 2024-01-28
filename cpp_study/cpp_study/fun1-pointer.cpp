#include <iostream>

using namespace std;

//함수를 지시하는 포인터

int func(int);

int main() {

	int (*pf)(int);
	pf = func; // pf에 함수의 주소 저장

	cout << (*pf)(3) << endl;

	return 0;
}

int func(int n) {
	return n + 1;
}