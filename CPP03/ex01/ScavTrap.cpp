#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	name = "with no name";
	hit_pts = 100;
	energy_pts = 50;
	att_damage = 20;
	std::cout << "ScavTrap " + name + " created" << std::endl;
}

ScavTrap::ScavTrap(std::string name_to_give)
{
	name = name_to_give;
	hit_pts = 100;
	energy_pts = 50;
	att_damage = 20;
	std::cout << "ScavTrap " + name + " created" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " + name + " destructed with " << hit_pts << " hit points left and " << energy_pts << " energy points left" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copia)
{
	name = copia.getName();
	hit_pts = copia.getHitpts();
	energy_pts = copia.getEnergypts();
	att_damage = copia.getAttdamage();
	std::cout << "ScavTrap " + name + " copied" << std::endl;
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap &copia)
{
	*this = copia;
}

void	ScavTrap::attack(const std::string &target)
{
	std::cout << "ScavTrap " + name;
	if (!hit_pts)
	{
		std::cout << " is dead, therefore it can't attack" << std::endl;
		return;
	}
	if (!energy_pts)
	{
		std::cout << " has no energy to attack" << std::endl;
		return;
	}
	energy_pts--;
	std::cout << " attacked " + target + ", causing " << att_damage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " + name + " is now in Gate keeper mode" << std::endl;
}