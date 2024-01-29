#include <iostream>

using namespace std;

template <class Any>
Any sum(Any, Any);
//데이터형의 일반화 // 사용자가 어떤 데이터형을 사용할지 정해지지 않음
//함수 템플릿 : 오버로딩 상위버전 >> 함수의 기능은 명확하지만 자료형을 모호하게 선언
int main() {
	int a = 3;
	int b = 4;
	cout << sum(a, b) << endl;

	float c = 3.14;
	float d = 1.592;
	cout << sum(c, d) << endl;

	//cout << sum(a,c)<<endl; 오류 >> a가 먼저오기 때문에 class Any는 int로 매칭되게 됨. 따라서 
	//데이터형에 맞지 않는 float d 때문에 오류가 뜬다
}

template <class Any>
Any sum(Any a, Any b) {
	return a + b;
}