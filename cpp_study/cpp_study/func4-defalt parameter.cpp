#include <iostream>

using namespace std;

const int SIZE = 8;
int sumArr(int*, int n=1);//디폴트값

int main() {
	int arr[SIZE] = { 1,2,4,5,16,32,64 };
	int sum = sumArr(arr); //인자값 하나를 전달하지 않았을떄

	cout << "함수의 총 합은 " << sum << " 입니다";
	return 0;
}

int sumArr(int* arr, int n) {
	int total = 0;

	for (int i = 0; i < n; i++) {
		total += arr[i];
	}

	return total;
}