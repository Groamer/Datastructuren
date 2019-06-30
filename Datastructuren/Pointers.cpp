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
	//normally allocated vars will be stored in the stack
	int *ptr1 = &value;
	*ptr1 = 96;
	std::cout << "Value: " << value << std::endl;
	*ptr1 = NULL;
	std::cout << "Value: " << value << std::endl;

	//new allocated vars will be stored in the heap
	//they also have to be deleted manually to prevent memory leaks
	int *ptr2 = new int;
	*ptr2 = 1;
	std::cout << "Address of ptr: " << &ptr2 << std::endl;
	std::cout << "ptr: " << *ptr2 << std::endl;
	delete ptr2;
}