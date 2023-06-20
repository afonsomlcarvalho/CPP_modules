#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat Pauleta("Pauleta", 1);
		Pauleta.decrement();
		std::cout << Pauleta << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}