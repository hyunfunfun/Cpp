#include <iostream>

using namespace std;


//�Լ� �����ε��� ���ø� Ȱ���Ͽ� �پ��� �Ű����� �̿��ϱ�

template <class Any>
Any sum(Any, Any);//Any�� ������ Any�� ����
template <class Any>
Any sum(int, Any); //int�� ������ Any�� ����

//�پ��� �������� Ȱ���ϴ� ��
int main() {
	int a = 3;
	int b = 4;
	//cout << sum(a, b) << endl; �Լ���Ģ2�� ���� (ù��° sum���� �����ǰ�, �ι��� sum���� �����Ǳ� ������ ����)

	float c = 3.14;
	float d = 1.592;
	cout << sum(c, d) << endl;

	cout << sum(a, c) << endl;//ù������ Any�� int�� �Ǳ� ������ c�� flaot�̶� ������ �ȵ�. �ι����� int, Any�� flaot�� �Ǳ� ������ ���� ��.

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