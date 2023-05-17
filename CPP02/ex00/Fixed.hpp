#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	int	number_value;
	static const int	fractional = 8;

public:
	Fixed();
	Fixed(const Fixed &n);
	~Fixed();
	Fixed & operator = (const Fixed &n);
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif