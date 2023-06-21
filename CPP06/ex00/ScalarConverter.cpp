#include "ScalarConverter.hpp"
#include <iomanip>

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &copia) {(void) copia;}

ScalarConverter::~ScalarConverter() {}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copia) {(void) copia; return (*this);}

int	isNumber(std::string literal)
{
	for (unsigned int i = (literal.at(0) == '+' || literal.at(0) == '-'); i < literal.length(); i++)
	{
		if (!std::isdigit(literal.at(i)) && !(literal.at(i) == '.' && literal.find_first_of('.') == i) && !(i == literal.length() - 1 && literal.at(i) == 'f'))
			return (0);
	}
	return (1);
}

int ScalarConverter::i = 0;
double ScalarConverter::d = 0;
char ScalarConverter::c = 0;
float ScalarConverter::f = 0;

void ScalarConverter::converter(std::string literal)
{
	if (literal.length() == 1 && !isdigit(literal.at(0)))
		d = literal.at(0);
	else if (isNumber(literal))
	{
		d = atof(literal.c_str());
	}
	else
	{
		std::cout << "invalid input" << std::endl;
		return;
	}
	c = static_cast <char> (d);
	f = static_cast <float> (d);
	i = static_cast <int> (d);
}

void ScalarConverter::display()
{
	// std::cout << std::setprecision(9);
	std::cout << "double: " << d << std::endl;
	std::cout << "char: " << c << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "interger: " << i << std::endl;
}