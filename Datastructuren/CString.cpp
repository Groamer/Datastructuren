#include "stdafx.h"
#include "CString.h"

CString::CString() {

}

CString::~CString() {
	delete[] this->cString;
}

void CString::printCString(char* chars, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << chars[i];
	}
	std::cout << std::endl;
}

char* CString::stringtoCString(std::string input) {
	//The last element in a C style string has to be NULL to indicate
	//the end of a string.
	this->cString = new char[input.size() + 1];

	for (int i = 0; i < input.length(); i++) {
		this->cString[i] = input[i];
	}

	return this->cString;
}