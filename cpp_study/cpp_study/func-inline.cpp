#include <iostream>

using namespace std;

inline float square(float x) {
	return x * x;
}

int main() {
	int a = 5;
	cout << "�Ѻ��� ���̰� " << a << "�� ���簢���� ���̴�?" << endl;
	float b = square(a);
	cout << b << endl;
}