#include "Point.hpp"

Point::Point(): x(0), y(0) {}

Point::Point(const Point &p): x(p.x), y(p.y) {}

Point::Point(const float x_to_set, const float y_to_set): x(x_to_set), y(y_to_set) {}

Point::~Point() {}

const Point &Point::operator=(const Point &p)
{
	const_cast<Fixed&> (x) = p.get_number('x');
	const_cast<Fixed&> (y) = p.get_number('y');
	return (*this);
}

const Fixed &Point::get_number(char c) const
{
	if (c == 'x')
		return (x);
	return (y);
}

Point 	operator-(Point a, Point b)
{
	return(Point((a.get_number('x') - b.get_number('x')).toFloat(), (a.get_number('y') - b.get_number('y')).toFloat()));
}
