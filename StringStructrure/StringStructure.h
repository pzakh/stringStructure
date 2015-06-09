namespace StringStructure
{
	class StringStructure
	{
	public:
		static int lenght(char stringStructure[]);

		static int countOfSymbolInLine(char stringStructure[], char symbol);

		static void writeln(char stringStructure[]);

		static void readln(char stringStructure[]);

		static bool isPunct(char symbol);

		static bool isNumber(char symbol);

		static bool isSymbol(char symbol);

		static void concatination(char stringStructure[], char concateString[]);
	};
}