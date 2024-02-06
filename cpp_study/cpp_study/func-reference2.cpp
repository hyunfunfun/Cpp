#include <iostream>

using namespace std;

int& ref1(int& ref) { //반환 - 참조, 매개변수 - 참조
	ref++;
	return ref;
}

int ref2(int& ref) { //반환 - 기본, 매개변수 - 참조
	ref++;
	return ref;
}

int ref3(int ref) { //반환 - 기본, 매개변수 - 기본
	ref++;
	return ref;
}

int main() {
	int num1 = 10;
	int& num2 = ref1(num1);
	int num3 = ref1(num2);

	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;
	cout << "num3 : " << num3 << endl;

	int num4 = 10;
	//int& num5 = ref2(num1); 
	int num5 = ref2(num4);

	cout << "num4 : " << num4 << endl;
	cout << "num5 : " << num5 << endl;

	int num6 = 10;
	int num7 = ref3(num6);

	cout << "num6 : " << num6 << endl;
	cout << "num7 : " << num7 << endl;
}