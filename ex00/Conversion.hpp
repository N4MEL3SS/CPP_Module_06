#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <limits>
# include <iomanip>
# include <cstdlib>
# include <climits>

# define CHAR_DISPLAY_MIN 33
# define CHAR_DISPLAY_MAX 126
# define PRECISION 1

class Conversion
{
public:
	Conversion();
	Conversion(const char *input);
	Conversion(Conversion const &toCopy);

	~Conversion();

	Conversion &operator = (Conversion const &toCopy);

	void printChar();
	void printInt();
	void printFloat();
	void printDouble();

private:
	double _raw_data;
};


#endif //CONVERSION_HPP
