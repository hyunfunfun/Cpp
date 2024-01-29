#include <iostream>

using namespace std;

int sum(int, int);
float sum(float, float);

/*
1.
int sum(int, int);
float sum(int, int); 와 같이 같은 매개변수를 사용하는것은 x

2. 함수를 사용할 떄, 두개 이상의 함수에 대응되는 경우 x

*/

int main() {

	cout << "두 정수를 입력하시오.\n";
	int a, b;
	cin >> a >> b;
	cout << "두 정수의 합은 " << sum(a, b) << "입니다.\n";
	cout << "두 정수를 입력하시오.\n";
	float c, d;
	cin >> c >> d;
	cout << "두 정수의 합은 " << sum(c, d) << "입니다.\n";

	return 0;
}

int sum(int a, int b) {
	return a + b;
}
float sum(float a, float b) {
	return a + b;
}