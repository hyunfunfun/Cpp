#include <iostream>

using namespace std;

void print(char, int);
void print(int, int);
void print(char);

int main() {
	//�Լ� �����ε� : �������� �Լ��� ���� �̸����� ���� // ���������� ���������� �ٸ� ������ ���� �ʿ��Ҷ�
	print('a', 3);
	print(3, 2);
	print('a');


	return 0;
}