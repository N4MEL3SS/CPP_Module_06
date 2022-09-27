#include "Conversion.hpp"

Conversion::Conversion()
{
	this->_raw_data = 42;
}

Conversion::Conversion(const char *input)
{
	this->_raw_data = atof(input);
}

Conversion::Conversion(const Conversion &toCopy)
{
	*this = toCopy;
}

Conversion::~Conversion(){}

Conversion &Conversion::operator = (const Conversion &toCopy)
{
	this->_raw_data = toCopy._raw_data;

	return *this;
}

void Conversion::printChar()
{
	if (!(this->_raw_data >= CHAR_MIN && this->_raw_data <= CHAR_MAX))
		std::cout << "char: impossible" << std::endl;
	else if (!(this->_raw_data >= CHAR_DISPLAY_MIN && this->_raw_data <= CHAR_DISPLAY_MAX))
		std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(this->_raw_data) << "'" << \
			std::endl;
}

void Conversion::printInt()
{
	if (this->_raw_data <= INT_MAX && this->_raw_data >= INT_MIN)
		std::cout << "int: " << static_cast<int>(this->_raw_data) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
}

void Conversion::printFloat()
{
	std::cout << "float: " << std::fixed << std::setprecision(PRECISION) << \
		static_cast<float>(this->_raw_data) << "f" << std::endl;
}

void Conversion::printDouble()
{
	std::cout << "double: " << std::fixed << std::setprecision(PRECISION) << \
		this->_raw_data << std::endl;
}
