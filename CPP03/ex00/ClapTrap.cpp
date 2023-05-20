#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name_to_give)
{
	name = name_to_give;
	att_damage = 0;
	hit_pts = 10;
	energy_pts = 10;
	std::cout << "ClapTrap named " << name << " created" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	std::cout << "Claptrap " + name;
	if (!energy_pts)
	{
		std::cout << " has no energy to attack" << std::endl;
		return;
	}
	std::cout << " " + target + ", causing " << att_damage << " points of damage!" << std::endl;
}