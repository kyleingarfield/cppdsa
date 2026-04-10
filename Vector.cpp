#include "vector.h"
//private
void vector::grow() {
        capacity_ *= 2;
        int* new_arr = new int[capacity_];

        for (size_t i {}; i < size_; i++) {
                new_arr[i] = arr[i];
        }

        delete[] arr;
        arr = new_arr;
}

//public
// Constructors & Destructor
vector::vector() {
	size_ = capacity_ = 0;
	arr = nullptr;
}

vector::vector(size_t init_size) {
	size_ = capacity_ = init_size;
	arr = new int[size_];
}

vector::vector(size_t init_size, int init_value) {
	size_ = capacity_ = init_size;
	arr = new int[size_];

	for (size_t i {}; i < size_; i++) {
		arr[i] = init_value;
	}
}

vector::vector(std::initializer_list<int> list) {
	size_ = list.size();
	arr = new int[size_];

	for (size_t i {}; i < size_; i++) {
		arr[i] = *(list.begin() + i);
	}
}

vector::~vector() {
	delete[] arr;
}

// Element Access
int& vector::at(size_t idx) {
        if (idx < 0 || idx > size_ - 1) {
                throw std::out_of_range("index out of range");
        }

        return arr[idx];

}

int& vector::operator[](size_t idx) {
	return arr[idx];
}

int& vector::front() {
	return arr[0];
}

int& vector::back() {
	return arr[size_ - 1];
}

// Capacity
bool vector::empty() const {
	return size_ == 0;
}

size_t vector::size() const {
	return size_;
}

void vector::reserve(size_t new_cap) {
	capacity_ = new_cap;
       	int* new_arr = new int[capacity_];

	for (size_t i {}; i < size_; i++) {
		new_arr[i] = arr[i];
	}

	delete[] arr;
	arr = new_arr;
}


// Modifiers

void vector::clear() {
	return;
}

void vector::insert(size_t pos, int value) {
	return;
}

void vector::erase(size_t pos){
	return;
}

void vector::resize(size_t new_size) {
	if (size_ == new_size) { return; }
	
	size_ = capacity_ = new_size;

	int* new_arr = new int[size_];
		
	for (size_t i {}; i < size_; i++) {
		new_arr[i] = arr[i];
	}

	delete[] arr;
	arr = new_arr;
}

void vector::push_back(int value) {
	if (size_ == capacity_) { 
		grow();
		arr[size_] = value;
	}
	else {
		arr[size_] = value;
	}
	
	size_ += 1;
}

void vector::pop_back() {
	// undefined behavior if size == 0, changed in C++26 see cppref
	size_ -= 1;
}

// Additional
void vector::print() {
        if (size_ == 0) {
                std::cout << "[]" << std::endl;
                return;
        }

        std::cout << '[';
        for (size_t i {}; i < size_ - 1; i++) {
                std::cout << arr[i] << ", ";
        }
        std::cout << arr[size_ - 1] << ']' << std::endl;
}

