#include "Class1.h"

int main() {

	Stock s[4] = {
		Stock("A",10,1000),
		Stock("B",20,1200),
		Stock("C",20,1200),
		Stock("D",20,1200)
	};

	s[0].show();

	return 0;
}