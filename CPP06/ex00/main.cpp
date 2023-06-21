#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return (0);
	}

	std::string input = argv[1];
	ScalarConverter	scale;
	
	scale.converter(input);
	scale.display();
}