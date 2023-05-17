#include "Fixed.hpp"

Fixed::Fixed()
{
	number_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &n)
{
	std::cout << "Copy constructor called" << std::endl;
	number_value = n.getRawBits();
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