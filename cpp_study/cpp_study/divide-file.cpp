#include "divide-file.h"

int main() {
	MyStruct Panda = {
		"Panda",
		24
	};

	display(Panda);
	return 0;

}

void display(MyStruct& temp) {
	cout << "�̸� : " << temp.name << endl;
	cout << "���� : " << temp.age << endl;
}