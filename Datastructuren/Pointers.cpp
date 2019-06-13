#include "stdafx.h"
#include "Pointers.h"

Pointers::Pointers() {
	value = 69;
}

Pointers::~Pointers() {

}

void Pointers::getAddress() {
	std::cout << "Address of value: " << &value << std::endl;
}

void Pointers::accessAddress() {
	int *ptr = &value;
	*ptr = 96;
	std::cout << "Value: " << value << std::endl;
}