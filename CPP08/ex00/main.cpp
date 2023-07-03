#include "easyfind.hpp"
#include <vector>

int	main()
{
	int ola[] = { 1, 2, 3, 4, 5 };
	std::vector<int> ar(ola, ola + sizeof(ola) / sizeof(*ola));
	std::vector<int>::iterator ptr;

	try
	{
		std::cout << *(easyfind(ar, 3)) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
