#include <iostream>

using namespace std;

//함수를 지시하는 포인터

int func(int);

int main() {

	cout << func << endl;

	return 0;
}

int func(int n) {
	return n + 1;
}