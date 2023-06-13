#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat Pauleta("Mario", -5);
		std::cout << Pauleta << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}