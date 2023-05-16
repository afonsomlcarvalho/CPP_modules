#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>

class Harl
{
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	void	(Harl::*f[4])(void);
	std::string	levels[4];

public:
	void	complain(std::string level);
	Harl();
};
#endif