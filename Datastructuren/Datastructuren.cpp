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

	DummyModel modelA(10, 20);
	modelA.print();

	DummyModel modelB = modelA;
	modelB.print();

	DummyModel modelC(modelA);
	modelC.print();

	CString cString;
	std::string text = "super duper text for test purposes!";
	cString.printCString(cString.stringtoCString(text), text.length());

	Overloader overloader(4, 8, 2012);
	std::cout << overloader << std::endl;

	system("pause");
	return 0;
}

