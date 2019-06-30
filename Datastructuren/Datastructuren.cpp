#include "stdafx.h"
#include "SimpleMethods.h"
#include "ConsoleIO.h"
#include "FileIO.h"
#include "Pointers.h"
#include "Arrays.h"
#include "DummyModel.h"
#include "CString.h"
#include "Overloader.h"

int main()
{
	SimpleMethods simpleMethods;
	std::cout << "6 + 3 = " << simpleMethods.add(6, 3) << std::endl;;
	std::cout << "6 - 3 = " << simpleMethods.substract(6, 3) << std::endl;;
	std::cout << "6 * 3 = " << simpleMethods.multiply(6, 3) << std::endl;;
	std::cout << "6 / 3 = " << simpleMethods.devide(6, 3) << std::endl;;

	ConsoleIO consoleIO;
	consoleIO.consoleInput();
	consoleIO.consoleOutput("Godverneuk dikke tekst.");

	FileIO fileIO;
	fileIO.writeTextToFile("Godverdomme dik bestand met dikke tekst.");
	fileIO.readTextFromFile();

	Pointers pointers;
	pointers.getAddress();
	pointers.accessAddress();

	Arrays arrays;
	arrays.setDynamicArray();

	DummyModel modelA;
	modelA.setCoordinates2D(5, 10);
	DummyModel modelB(modelA);
	modelA.setCoordinates2D(0, 0);
	std::cout << "Model A: " << modelA << std::endl;
	std::cout << "Model B: " << modelB << std::endl;

	CString cString;
	std::string text = "super duper text for test purposes!";
	cString.printCString(cString.stringtoCString(text), text.length());

	Overloader overloaderA(4, 8, 2012);
	Overloader overloaderB(1, 1, 2010);
	std::cout << "Date A: " << overloaderA << std::endl;
	std::cout << "Date B: " << overloaderB << std::endl;
	overloaderA = overloaderB;
	std::cout << "Date A: " << overloaderA << std::endl;

	system("pause");
	return 0;
}

