#include "Fixed.hpp"

Fixed::Fixed()
{
	number_value = 0;
}

Fixed::Fixed(const Fixed &n)
{
	number_value = n.number_value;
}

Fixed::Fixed(const int n)
{
	number_value = n << fractional;
}

Fixed::Fixed(const float n)
{
	number_value = roundf(n * (1 << fractional));
}

int Fixed::getRawBits() const
{
	return (number_value);
}

int	Fixed::getFractional() const
{
	return (fractional);
}

void	Fixed::setRawBits(int const raw)
{
	number_value = raw;
}

Fixed &Fixed::operator=(const Fixed &n)
{
	number_value = n.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
}

float	Fixed::toFloat() const
{
	return (((float) number_value) / (1 << fractional));
}

int	Fixed::toInt() const
{
	return ((int) roundf(number_value >> fractional));
}

std::ostream	&operator<<(std::ostream &out, const Fixed &n)
{
	out << n.toFloat();
	return (out);
}

bool	operator>(const Fixed &a, const Fixed &b)
{
	return (a.getRawBits() > b.getRawBits());
}

bool	operator<(const Fixed &a, const Fixed &b)
{
	return (b > a);
}

bool	operator>=(const Fixed &a, const Fixed &b)
{
	return (!(a < b));
}

bool	operator<=(const Fixed &a, const Fixed &b)
{
	return (!(a > b));
}

bool	operator==(const Fixed &a, const Fixed &b)
{
	return (a.getRawBits() == b.getRawBits());
}

bool	operator!=(const Fixed &a, const Fixed &b)
{
	return (!(a == b));
}

Fixed &Fixed::operator++()
{
	number_value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	temp = *this;
	++(*this);
	return (temp);
}

Fixed &Fixed::operator--()
{
	number_value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	temp = *this;
	--(*this);
	return (temp);
}

Fixed 	operator+(Fixed a, const Fixed &b)
{
	a.setRawBits(a.getRawBits() + b.getRawBits());
	return (a);
}

Fixed 	operator-(Fixed a, const Fixed &b)
{
	a.setRawBits(a.getRawBits() - b.getRawBits());
	return (a);
}

Fixed 	operator*(Fixed a, const Fixed &b)
{
	a.setRawBits((a.toFloat() * b.toFloat()) * (1 << a.getFractional()));
	return (a);
}

Fixed 	operator/(Fixed a, const Fixed &b)
{
	a.setRawBits((a.toFloat() / b.toFloat()) * (1 << a.getFractional()));
	return (a);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}