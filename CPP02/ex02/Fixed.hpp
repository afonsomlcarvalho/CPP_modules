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
	int	getFractional() const;
	Fixed &operator=(const Fixed &n);
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);
	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);
};

bool	operator>(const Fixed &a, const Fixed &b);
bool	operator<(const Fixed &a, const Fixed &b);
bool	operator>=(const Fixed &a, const Fixed &b);
bool	operator<=(const Fixed &a, const Fixed &b);
bool	operator==(const Fixed &a, const Fixed &b);
bool	operator!=(const Fixed &a, const Fixed &b);
Fixed 	operator+(Fixed a, const Fixed &b);
Fixed 	operator-(Fixed a, const Fixed &b);
Fixed 	operator*(Fixed a, const Fixed &b);
Fixed 	operator/(Fixed a, const Fixed &b);

std::ostream	&operator<<(std::ostream &out, const Fixed &n);

#endif