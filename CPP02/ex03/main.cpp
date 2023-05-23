#include "Point.hpp"

int main( void )
{
	Point	a(-1, 0);
	Point	b(1, 0);
	Point	c(0, 2);

	Point	p(0.5, 0.2);
	std::cout << bsp(a, b, c, p) << std::endl;
}