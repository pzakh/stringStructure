#include "StringStructure.h"
#include <iostream>

using namespace StringStructure;
using namespace std;

int main()
{
	char str[100];
	char initStr[100] = "\0"; int j = 0; int b; char a;
	int stringCount[100];
	FILE *fp = fopen("input.txt", "r");
	fgets(str, sizeof(str), fp);
	fclose(fp);
	for (int i = 0; i<StringStructure::length(str); i++)
	{
		if (StringStructure::countOfSymbolInLine(initStr, str[i]) == 0)
		{
			initStr[j] = str[i]; j++;
		}
	}
	for (int i = 0; i<StringStructure::length(initStr); i++)
	{
		stringCount[i] = StringStructure::countOfSymbolInLine(str, initStr[i]);
	}

	for (int i = 0; i<StringStructure::length(initStr) - 1; i++)
		for (int j = i + 1; j<StringStructure::length(initStr); j++)
		{
			if (stringCount[i]<stringCount[j]) {
				b = stringCount[i];
				stringCount[i] = stringCount[j];
				stringCount[j] = b;
				a = initStr[i];
				initStr[i] = initStr[j];
				initStr[j] = a;
			}
		}



	FILE *fpr = fopen("output.txt", "w");
	fprintf(fpr, "%s", "Áóêâû\n");

	for (int i = 0; i<StringStructure::length(initStr); i++)
	{
		if (StringStructure::isSymbol(initStr[i])) { fprintf(fpr, "%c ", initStr[i]); fprintf(fpr, "%i \n", stringCount[i]); }
	}
	fprintf(fpr, "%s", "\nÖèôðû\n");
	for (int i = 0; i<StringStructure::length(initStr); i++)
	{
		if (StringStructure::isNumber(initStr[i])) { fprintf(fpr, "%c ", initStr[i]); fprintf(fpr, "%i \n", stringCount[i]); }
	}
	fprintf(fpr, "%s", "\nÑèìâîëû\n");
	for (int i = 0; i<StringStructure::length(initStr); i++)
	{
		if (StringStructure::isPunct(initStr[i])) { fprintf(fpr, "%c ", initStr[i]); fprintf(fpr, "%i \n", stringCount[i]); }
	}


	fclose(fpr);
	system("pause");
	return 0;
}