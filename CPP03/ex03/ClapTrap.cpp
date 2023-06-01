#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name_to_give)
{
	name = name_to_give;
	att_damage = 0;
	hit_pts = 10;
	energy_pts = 10;
	std::cout << "ClapTrap named " << name << " created" << std::endl;
}

ClapTrap::ClapTrap()
{
	name = "with no name";
	att_damage = 0;
	hit_pts = 10;
	energy_pts = 10;
	std::cout << "ClapTrap " << name << " created" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap)
{
	name = clap.getName();
	att_damage = clap.getAttdamage();
	hit_pts = clap.getHitpts();
	energy_pts = clap.getEnergypts();
	std::cout << "ClapTrap " << name << " copied" << std::endl;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	std::cout << "Claptrap " + name;
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

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!hit_pts)
	{
		std::cout << "Claptrap " + name + " is already dead. It can't take any more damage" << std::endl;
		return;
	}
	if ((long)hit_pts < amount)
		hit_pts = 0;
	else
		hit_pts -= amount;
	std::cout << "Claptrap " + name + " took " << amount << " damage points, being left with " << hit_pts << " hit points" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "Claptrap " + name;
	if (!hit_pts)
	{
		std::cout << " is dead, therefore it can't repair" << std::endl;
		return;
	}
	if (!energy_pts)
	{
		std::cout << " has no energy to repair" << std::endl;
		return;
	}
	hit_pts += amount;
	energy_pts--;
	std::cout << " repaired " << amount << " hit points, being left with " << hit_pts << " hit points" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " + name + " destructed with " << hit_pts << " hit points left and " << energy_pts << " energy points left" << std::endl;
}

std::string ClapTrap::getName() const
{
	return(name);
}

int	ClapTrap::getHitpts() const
{
	return(hit_pts);
}

int	ClapTrap::getEnergypts() const
{
	return(energy_pts);
}

int	ClapTrap::getAttdamage() const
{
	return(att_damage);
}