#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;

	int	i = 0;
	number_value = 0;
	mult_factor = 1;
	while (i++ < fractional)
		mult_factor *= 2;
}

Fixed::Fixed(const Fixed &n)
{
	std::cout << "Copy constructor called" << std::endl;

	int	i = 0;
	number_value = n.getRawBits();
	mult_factor = 1;
	while (i++ < fractional)
		mult_factor *= 2;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;

	int	i = 0;
	mult_factor = 1;
	while (i++ < fractional)
		mult_factor *= 2;
	// por protecao overflow
	number_value = n * mult_factor;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;

	int	i = 0;
	mult_factor = 1;
	while (i++ < fractional)
		mult_factor *= 2;
	number_value = n * mult_factor;
	number_value = (int)roundf(number_value);
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
	return ((float) number_value / mult_factor);
}

int	Fixed::toInt() const
{
	return ((int) roundf(number_value / mult_factor));
}