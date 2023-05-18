#ifndef	ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	std::string	name;
public:
	Zombie(void);
	void	announce(void);
	void	setName(std::string name_to_give);
	Zombie(std::string name_to_give);
	~Zombie(void);
};

Zombie* zombieHorde( int N, std::string name );
#endif