#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return (0);
	}

	double	save;
	char	c;
	float	f;
	int		i;

	std::string input = argv[1];
	
	if (input.length() == 1 && !isdigit(input.at(0)))
		save = input.at(0);
	else
		save = atof(input.c_str());
	c = save;
	f = save;
	i = save;
	std::cout << save << std::endl;
	std::cout << c << std::endl;
	std::cout << f << std::endl;
	std::cout << i << std::endl;
}