#pragma once
#include <iostream>
#include <string>

class ConsoleIO {
private:

public:
	ConsoleIO();
	~ConsoleIO();

	void consoleInput();
	void consoleOutput(std::string);
};