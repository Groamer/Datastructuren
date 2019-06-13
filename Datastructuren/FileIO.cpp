#include "stdafx.h"
#include "FileIO.h"

FileIO::FileIO() {
	this->file = "output.txt";
}

FileIO::~FileIO() {

}

void FileIO::writeTextToFile(std::string text) {
	std::ofstream file(this->file);

	if (file.is_open()) {
		file << text;
		file.close();
	}
	else {
		std::cout << "ERROR: Unable to open file.";
	}
}

void FileIO::readTextFromFile() {
	std::string line;
	std::ifstream file(this->file);

	if (file.is_open()) {
		while (std::getline(file, line)) {
			std::cout << line << std::endl;
		}
		file.close();
	}
	else {
		std::cout << "ERROR: Unable to open file.";
	}
}