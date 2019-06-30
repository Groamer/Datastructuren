#pragma once

class CString {
private:
	char* cString;

public:
	CString();
	~CString();

	void printCString(char*, int);
	char* stringtoCString(std::string);
};