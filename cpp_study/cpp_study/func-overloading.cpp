#include <iostream>

using namespace std;

int sum(int, int);
float sum(float, float);

/*
1.
int sum(int, int);
float sum(int, int); �� ���� ���� �Ű������� ����ϴ°��� x

2. �Լ��� ����� ��, �ΰ� �̻��� �Լ��� �����Ǵ� ��� x

*/

int main() {

	cout << "�� ������ �Է��Ͻÿ�.\n";
	int a, b;
	cin >> a >> b;
	cout << "�� ������ ���� " << sum(a, b) << "�Դϴ�.\n";
	cout << "�� ������ �Է��Ͻÿ�.\n";
	float c, d;
	cin >> c >> d;
	cout << "�� ������ ���� " << sum(c, d) << "�Դϴ�.\n";

	return 0;
}

int sum(int a, int b) {
	return a + b;
}
float sum(float a, float b) {
	return a + b;
}