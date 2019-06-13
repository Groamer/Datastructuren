#include "stdafx.h"
#include "SimpleMethods.h"
#include "ConsoleIO.h"
#include "FileIO.h"
#include "Pointers.h"
#include "Arrays.h"

int main()
{
	/*SimpleMethods simpleMethods;
	std::cout << "6 + 3 = " << simpleMethods.add(6, 3) << std::endl;;
	std::cout << "6 - 3 = " << simpleMethods.substract(6, 3) << std::endl;;
	std::cout << "6 * 3 = " << simpleMethods.multiply(6, 3) << std::endl;;
	std::cout << "6 / 3 = " << simpleMethods.devide(6, 3) << std::endl;;

	ConsoleIO consoleIO;
	consoleIO.consoleInput();
	consoleIO.consoleOutput("Godverneuk dikke tekst.");

	FileIO fileIO;
	fileIO.writeTextToFile("Godverdomme dik bestand met dikke tekst.");
	fileIO.readTextFromFile();*/

	Pointers pointers;
	pointers.getAddress();
	pointers.accessAddress();

	Arrays arrays;
	arrays.setDynamicArray();

	system("pause");
	
	return 0;
}

