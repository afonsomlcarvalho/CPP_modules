#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;

	number_value = 0;
}

Fixed::Fixed(const Fixed &n)
{
	std::cout << "Copy constructor called" << std::endl;

	number_value = n.number_value;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;

	number_value = n << fractional;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;

	number_value = roundf(n * (1 << fractional));
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (number_value);
}

void	Fixed::setRawBits(int const raw)
{
	number_value = raw;
}

Fixed &Fixed::operator=(const Fixed &n)
{
	std::cout << "Copy assignment operator called" << std::endl;
	number_value = n.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
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