#include "stdafx.h"
#include "Arrays.h"

Arrays::Arrays() {

}

Arrays::~Arrays() {

}

void Arrays::setDynamicArray() {
	std::vector<int> ints;
	ints.push_back(1);
	ints.push_back(2);
	ints.push_back(3);
	ints.push_back(4);

	for (int i : ints) {
		std::cout << i << std::endl;
	}
}

void Arrays::setStaticArray() {

}