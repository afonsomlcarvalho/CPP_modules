#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <stdlib.h>

Base *generate()
{
	srand(time(NULL));
	int	i = rand() % 3;

	Base *ptr;
	
	switch (i)
	{
	case 0:
		ptr = new A;
		break;
	
	case 1:
		ptr = new B;
		break;
	
	case 2:
		ptr = new C;
		break;

	default:
		ptr = NULL;
		break;
	}
	return (ptr);
}

void	identify(Base *p)
{
	if (dynamic_cast <A *> (p))
		std::cout << "Type: A" << std::endl;
	if (dynamic_cast <B *> (p))
		std::cout << "Type: B" << std::endl;
	if (dynamic_cast <C *> (p))
		std::cout << "Type: C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		(void) dynamic_cast <A&> (p);
		std::cout << "Type: A" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			(void) dynamic_cast <B&> (p);
			std::cout << "Type: B" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				(void) dynamic_cast <C&> (p);
				std::cout << "Type: C" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << "No type identified." << std::endl;
			}
			
		}
	}
}

int	main()
{
	Base *ptr = generate();
	Base *c = new B;
	Base &a = *c;

	identify(ptr);
	identify(a);

	delete ptr;
	delete c;
}