#include "Conversion.hpp"

void convert(const char *input)
{
	Conversion myConversion(input);

	myConversion.printChar();
	myConversion.printInt();
	myConversion.printFloat();
	myConversion.printDouble();
}

int main(int argc, char **argv)
{
	if (argc != 2)
		convert("42");
	else
		convert(argv[1]);

	return 0;
}
