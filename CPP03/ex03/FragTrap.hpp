#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name_to_give);
	~FragTrap();
	FragTrap(const FragTrap &copia);
	FragTrap &operator=(const FragTrap &copia);
	void highFivesGuys(void);
};

#endif