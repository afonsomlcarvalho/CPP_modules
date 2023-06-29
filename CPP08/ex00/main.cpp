#include "easyfind.hpp"
#include <vector>

int	main()
{
	std::vector<int> ar = { 1, 2, 3, 4, 5 };
	std::vector<int>::iterator ptr;

	try
	{
		easyfind(ar, 3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}