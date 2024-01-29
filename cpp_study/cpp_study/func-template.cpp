#include <iostream>

using namespace std;

template <class Any1, class Any2>
Any1 sum(Any1, Any2);
int main() {
	int a = 3;
	float b = 3.14;

	cout << sum(a, b) << endl;
	return 0;
}
template <class Any1, class Any2>
Any1 sum(Any1 a, Any2 b) {
	return a + b;
}
