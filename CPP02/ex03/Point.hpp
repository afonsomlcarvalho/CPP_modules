#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	const Fixed x;
	const Fixed y;

public:
	Point();
	Point(const Point &p);
	Point(const float x_to_set, const float y_to_set);
	~Point();
	const Point &operator=(const Point &p);
	const Fixed &get_number(char c) const;
};

Point 	operator-(Point a, Point b);
bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif