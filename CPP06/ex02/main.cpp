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
		break;
	}
	return (ptr);
}

void	identify(Base *p)
{
	A *a_ptr = dynamic_cast <A *> (p);
	B *b_ptr = dynamic_cast <B *> (p);
	C *c_ptr = dynamic_cast <C *> (p);

	if (a_ptr)
		std::cout << "Type: A" << std::endl;
	if (b_ptr)
		std::cout << "Type: B" << std::endl;
	if (c_ptr)
		std::cout << "Type: C" << std::endl;
}

void	identify(Base &p)
{
	if (dynamic_cast <A*> (&p))
		std::cout << "Type: A" << std::endl;
	if (dynamic_cast <B *> (&p))
		std::cout << "Type: B" << std::endl;
	if (dynamic_cast <C *> (&p))
		std::cout << "Type: C" << std::endl;
}

int	main()
{
	Base *ptr = generate();
	Base *c = new A;
	Base &a = *c;

	identify(a);

	delete ptr;
	delete c;
}