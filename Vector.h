#ifndef VECTOR_H
#define VECTOR_H

#include <stdexcept>
#include <iostream>

class Vector {
private:
	int* arr;
	size_t size, capacity;
public:
	Vector();
	Vector(size_t init_size);
	Vector(size_t init_size, int init_val);
	Vector(std::initializer_list<int> list);
	~Vector();
	
	int& operator[](size_t idx);
	int& at(size_t idx);
	void resize();
	void print();
};

#endif
