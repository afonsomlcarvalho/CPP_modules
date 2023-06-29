#include "ScalarConverter.hpp"
#include <iomanip>

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &copia) {(void) copia;}

ScalarConverter::~ScalarConverter() {}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copia) {(void) copia; return (*this);}

int ScalarConverter::i = 0;
double ScalarConverter::d = 0;
char ScalarConverter::c = 0;
float ScalarConverter::f = 0;

int	isNumber(std::string literal)
{
	for (unsigned int i = (literal.at(0) == '+' || literal.at(0) == '-'); i < literal.length(); i++)
	{
		if (!std::isdigit(literal.at(i)) && !(literal.at(i) == '.' && literal.find_first_of('.') == i) && !(i == literal.length() - 1 && literal.at(i) == 'f'))
			return (0);
	}
	if (literal.find('f') != std::string::npos)
		return 1;
	if (literal.find('.') != std::string::npos)
		return 2;
	return 3;
}

void specialCases(std::string literal)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (!literal.compare("nan") || !literal.compare("-inf") || !literal.compare("+inf"))
	{
		std::cout << "float: " << literal << "f" << std::endl;
		std::cout << "double: " << literal << std::endl;
	}
	else
	{
		std::cout << "float: " << literal << std::endl;
		std::cout << "double: " << literal.substr(0, literal.length() - 1) << std::endl;
	}

}

void	ScalarConverter::convertChar(char ch)
{
	c = ch;
	d = static_cast <double> (c);
	f = static_cast <float> (c);
	i = static_cast <int> (c);
}

void	ScalarConverter::convertInt(int it)
{
	i = it;
	d = static_cast <double> (i);
	f = static_cast <float> (i);
	c = static_cast <char> (i);
}

void	ScalarConverter::convertFloat(float ft)
{
	f = ft;
	d = static_cast <double> (f);
	i = static_cast <int> (f);
	c = static_cast <char> (f);
}

void	ScalarConverter::convertDouble(double db)
{
	d = db;
	f = static_cast <float> (d);
	i = static_cast <int> (d);
	c = static_cast <char> (d);
}

void ScalarConverter::converter(std::string literal)
{
	int is_number = isNumber(literal);

	if (literal.length() == 1 && !isdigit(literal.at(0)))
		convertChar(literal.at(0));
	else if (is_number == 1)
		convertFloat(atof(literal.c_str()));
	else if (is_number == 2)
		convertDouble(atof(literal.c_str()));
	else if (is_number == 3)
		convertInt(atoi(literal.c_str()));
	else if (!literal.compare("nan") || !literal.compare("nanf") || !literal.compare("-inf") || !literal.compare("+inf") || !literal.compare("-inff") || !literal.compare("+inff"))
		return specialCases(literal);
	else
	{
		std::cout << "invalid input" << std::endl;
		return;
	}
	display();
}

void ScalarConverter::display()
{
	if (isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}