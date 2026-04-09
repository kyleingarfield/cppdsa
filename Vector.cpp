#include "Vector.h"

Vector::Vector() {
	size = 0;
	arr = nullptr;
}

Vector::Vector(size_t init_size) {
	size = init_size;
	arr = new int[init_size];
}

Vector::Vector(size_t init_size, int init_val) {
	size = init_size;
	arr = new int[init_size];

	for (size_t i {}; i < size; i++) {
		arr[i] = init_val;
	}
}

Vector::Vector(std::initializer_list<int> list) {
	size = list.size();
	arr = new int[size];

	for (size_t i {}; i < size; i++) {
		arr[i] = *(list.begin() + i);
	}
}

Vector::~Vector() {
	delete[] arr;
}

int& Vector::operator[](size_t idx) {
	return arr[idx];
}

int& Vector::at(size_t idx) {
	if (idx < 0 || idx > size - 1) {
		throw std::out_of_range("index out of range");
	}

	return arr[idx];

}

void Vector::resize() {
	int* new_arr = new int[size * 2];
		
	for (size_t i {}; i < size; i++) {
		new_arr[i] = arr[i];
	}

	delete[] arr;
	arr = new_arr;
	size *= 2;
}

void Vector::print() {
	std::cout << '[';
	for (size_t i {}; i < size - 1; i++) {
		std::cout << arr[i] << ", ";
	}
	std::cout << arr[size - 1] << ']' << std::endl;
}
