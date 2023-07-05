#include "RPN.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return (0);
	}
	
	if (line_analyser(argv[1]))
	{
		std::cout << "Invalid input" << std::endl;
		return (0);
	}

	process_formula(argv[1]);
}