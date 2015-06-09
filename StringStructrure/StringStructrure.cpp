#include "StringStructure.h"
#include <iostream>

#include "stdafx.h"
using namespace std;

namespace StringStructure{

	int StringStructure::lenght(char stringStructure[])
	{
		int lenght = 0;
		for (int i = 0; stringStructure[i] != '\0'; i++)
			lenght++;
		return lenght;
	}

	int StringStructure::countOfSymbolInLine(char stringStructure[], char symbol)
	{
		int count = 0;
		for (int i = 0; stringStructure[i] != '\0'; i++)
			if (stringStructure[i] == symbol)
				count++;
		return count;
	}

	void StringStructure::writeln(char stringStructure[])
	{
		cout << stringStructure << endl;
	}

	void StringStructure::readln(char stringStructure[])
	{
		cin >> stringStructure;
	}

	void StringStructure::concatination(char stringStructure[], char concateString[])
	{
		int i = 0;
		while (stringStructure[i] != '\0')
		{
			i++;
		}
		for (int j = 0; concateString[j] != '\0'; j++)
		{
			stringStructure[i] = concateString[j]; i++;
		}
		stringStructure[i] = '\0';
	}

	bool StringStructure::isPunct(char symbol)
	{
		int result = ispunct((int)symbol);
		if (result == 0){
			return false;
		}
		else{
			return true;
		}
	}

	bool StringStructure::isNumber(char symbol)
	{
		int result = isdigit((int)symbol);
		if (result == 0)
		{
			return false;
		}
		else{
			return true;
		}
			}

	bool StringStructure::isSymbol(char symbol)
	{
		int result = isalpha((int)symbol);
		if (result == 0){
			return false;
		}
		else{
			return true;
		}
	}
}
