#include <iostream>

using namespace std;

void print(char, int);
void print(int, int);
void print(char);

int main() {
	//함수 오버로딩 : 여러개의 함수를 같은 이름으로 연결 // 같은동작을 수행하지만 다른 데이터 형이 필요할때
	print('a', 3);
	print(3, 2);
	print('a');


	return 0;
}