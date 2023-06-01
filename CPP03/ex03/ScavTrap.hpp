#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name_to_give);
	~ScavTrap();
	ScavTrap(const ScavTrap &copia);
	ScavTrap &operator=(const ScavTrap &copia);
	void	attack(const std::string &target);
	void	guardGate();
};

#endif
