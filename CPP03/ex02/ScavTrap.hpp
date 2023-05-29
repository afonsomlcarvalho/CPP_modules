#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:
	ScavTrap();
	ScavTrap(std::string name_to_give);
	~ScavTrap();
	ScavTrap &operator=(const ScavTrap &copia);
	void	attack(const std::string &target);
	void	guardGate();
};

#endif
