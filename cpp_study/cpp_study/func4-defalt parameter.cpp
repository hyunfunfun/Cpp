#include <iostream>

using namespace std;

const int SIZE = 8;
int sumArr(int*, int n=1);//����Ʈ��

int main() {
	int arr[SIZE] = { 1,2,4,5,16,32,64 };
	int sum = sumArr(arr); //���ڰ� �ϳ��� �������� �ʾ�����

	cout << "�Լ��� �� ���� " << sum << " �Դϴ�";
	return 0;
}

int sumArr(int* arr, int n) {
	int total = 0;

	for (int i = 0; i < n; i++) {
		total += arr[i];
	}

	return total;
}