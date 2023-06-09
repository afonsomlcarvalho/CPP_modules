#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <fstream>
# include <cmath>

class	Fixed
{
	int	number_value;
	static const int	fractional = 8;

public:
	Fixed();
	Fixed(const Fixed &n);
	Fixed(const int n);
	Fixed(const float n);
	~Fixed();
	Fixed &operator=(const Fixed &n);
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &n);

#endif