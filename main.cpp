#include <iostream>
#include "Vector.h"

int main() {
	Vector v1 = {1,2,3};
	Vector v2(4);
	Vector v3(10, 3);

	v1.print();
	v2.print();
	v3.print();
	v3.push_back(4);
	v3.print();

	return 0;
}
