#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int	i = 0;
	int	x;
	std::string	current;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[++i])
		{
			current = argv[i];
			std::cout << argv[i];
		}
		std::cout << std::endl;
	}
}