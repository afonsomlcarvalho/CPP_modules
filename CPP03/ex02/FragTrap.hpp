#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name_to_give);
	~FragTrap();
	FragTrap &operator=(const FragTrap &copia);
	void	attack(const std::string &target);
	void highFivesGuys(void);
};

#endif