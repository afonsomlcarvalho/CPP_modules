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
			x = 0;
			current = argv[i];
			while (x < current.length())
			{
				current.at(x) = toupper(current.at(x));
				x++;
			}
			std::cout << current;
		}
		std::cout << std::endl;
	}
}