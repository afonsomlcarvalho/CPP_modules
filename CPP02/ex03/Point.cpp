#include "Point.hpp"

Point::Point(): x(0), y(0) {}

Point::Point(const Point &p): x(p.x), y(p.y) {}

Point::Point(const float x_to_set, const float y_to_set): x(x_to_set), y(y_to_set) {}

const Point &Point::operator=(const Point &p)
{
	return (p);
}

const Fixed &Point::get_number(char c)
{
	if (c == 'x')
		return (x);
	return (y);
}
