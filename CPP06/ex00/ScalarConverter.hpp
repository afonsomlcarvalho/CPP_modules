#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <stdlib.h>

class ScalarConverter
{
	static int		i;
	static float	f;
	static char		c;
	static double	d;

public:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &copia);
	~ScalarConverter();
	ScalarConverter &operator=(const ScalarConverter &copia);
	static void converter(std::string literal);
	static void	display();
};

#endif