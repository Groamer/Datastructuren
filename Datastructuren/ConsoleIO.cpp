#include "stdafx.h"
#include "ConsoleIO.h"

ConsoleIO::ConsoleIO() {

}

ConsoleIO::~ConsoleIO() {

}

void ConsoleIO::consoleInput() {
	std::string input;
	std::cout << "Enter your name: ";
	std::cin >> input;
	std::cout << "Hi " << input << "!" << std::endl;
}

void ConsoleIO::consoleOutput(std::string text) {
	std::cout << text << std::endl;
}