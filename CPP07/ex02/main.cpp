#include "Array.hpp"

int	main()
{
	Array<int>	ola(92);

	try
	{
		std::cout << ola[9] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}