#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	std::string name;
public:
	DiamondTrap();
	DiamondTrap(const DiamondTrap &copia);
	DiamondTrap(std::string name_to_give);
	~DiamondTrap();
	DiamondTrap &operator=(const DiamondTrap &copia);
	void	whoAmI();
};

#endif