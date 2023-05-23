#include "Point.hpp"

Fixed	det(Point a, Point b)
{
	return (a.get_number('x') * b.get_number('y') - a.get_number('y') * b.get_number('x'));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Point	vector1 = b - a;
	Point	vector2 = c - a;

	Fixed x = (det(point, vector2) - det(a, vector2)) / det(vector1, vector2);
	Fixed y = (det(a, vector1) - det(point, vector1)) / det(vector1, vector2);
	return (x >= 0 && y >= 0 && x + y < 1);
}