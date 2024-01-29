#include <iostream>

using namespace std;


//함수 오버로딩과 템플릿 활용하여 다양한 매개변수 이용하기

template <class Any>
Any sum(Any, Any);//Any형 변수와 Any형 변수
template <class Any>
Any sum(int, Any); //int형 변수와 Any형 변수

//다양한 데이터형 활용하는 법
int main() {
	int a = 3;
	int b = 4;
	//cout << sum(a, b) << endl; 함수규칙2번 위배 (첫번째 sum에도 대응되고, 두번쨰 sum에도 대응되기 떄문에 오류)

	float c = 3.14;
	float d = 1.592;
	cout << sum(c, d) << endl;

	cout << sum(a, c) << endl;//첫번쨰는 Any가 int가 되기 때문에 c가 flaot이라 실행이 안됨. 두번쨰는 int, Any가 flaot이 되기 때문에 실행 됨.

	return 0;
}
template <class Any>
Any sum(Any a, Any b) {
	return a + b;
}

template <class Any>
Any sum(int a, Any b) {
	return a + b;
}