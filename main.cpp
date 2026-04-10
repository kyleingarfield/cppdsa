#include <iostream>
#include "vector.h"

int main() {
	vector v = {1, 2, 3, 4, 5};
	v.print();
	std::cout << v.front() << " " << v.back() << std::endl;
	std::cout << v.size() << std::endl;
	v.resize(3);
	std::cout << v.size() << std::endl;
	v.print();
	return 0;
}
