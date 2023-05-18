#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie
{
	std::string	name;
public:
	void	announce(void);
	Zombie(std::string name_to_give);
	~Zombie(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif