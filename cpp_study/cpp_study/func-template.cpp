#include <iostream>

using namespace std;

template <class Any>
Any sum(Any, Any);
//���������� �Ϲ�ȭ // ����ڰ� � ���������� ������� �������� ����
//�Լ� ���ø� : �����ε� �������� >> �Լ��� ����� ��Ȯ������ �ڷ����� ��ȣ�ϰ� ����
int main() {
	int a = 3;
	int b = 4;
	cout << sum(a, b) << endl;

	float c = 3.14;
	float d = 1.592;
	cout << sum(c, d) << endl;

	//cout << sum(a,c)<<endl; ���� >> a�� �������� ������ class Any�� int�� ��Ī�ǰ� ��. ���� 
	//���������� ���� �ʴ� float d ������ ������ ���
}

template <class Any>
Any sum(Any a, Any b) {
	return a + b;
}