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
	cout << "이름 : " << temp.name << endl;
	cout << "나이 : " << temp.age << endl;
}