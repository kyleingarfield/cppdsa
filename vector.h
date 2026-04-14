#ifndef VECTOR_H
#define VECTOR_H

#include <stdexcept>
#include <iostream>

class vector {
private:
	int* arr;
	size_t size_, capacity_;
	void grow();
public:
	// Constructors & Destructor
	vector();
	vector(size_t init_size);
	vector(size_t init_size, int init_value);
	vector(std::initializer_list<int> list);
	~vector();

	// Element Access
	int& at(size_t idx);
	int& operator[](size_t idx);
	int& front();
	int& back();

	// Capacity
	bool empty() const;
	size_t size() const;
	void reserve(size_t new_cap);
	size_t capacity() const;

	// Modifiers
	void clear();
	void insert(size_t pos, int value);
	void erase(size_t pos);
	void resize(size_t new_size);
	void push_back(int value);
	void pop_back();

	// Additional
	void print();
};

#endif
