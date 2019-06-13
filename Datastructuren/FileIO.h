#pragma once
#include <iostream>
#include <fstream>
#include <string>

class FileIO {
private:
	std::string file;

public:
	FileIO();
	~FileIO();

	void writeTextToFile(std::string);
	void readTextFromFile();
};