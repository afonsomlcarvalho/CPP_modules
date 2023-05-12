#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int	i = 0;
	int	x;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[++i])
		{
			x = -1;
			while (argv[i][++x])
				argv[i][x] = toupper(argv[i][x]);
			std::cout << argv[i];
		}
		std::cout << std::endl;
	}
}