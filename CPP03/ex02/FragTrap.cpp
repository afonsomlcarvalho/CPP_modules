#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	name = "with no name";
	hit_pts = 100;
	energy_pts = 50;
	att_damage = 20;
	std::cout << "FragTrap " + name + " created" << std::endl;
}

FragTrap::FragTrap(std::string name_to_give)
{
	name = name_to_give;
	hit_pts = 100;
	energy_pts = 100;
	att_damage = 30;
	std::cout << "FragTrap " + name + " created" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " + name + " destructed" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copia)
{
	name = copia.getName();
	hit_pts = copia.getHitpts();
	energy_pts = copia.getEnergypts();
	att_damage = copia.getAttdamage();
	std::cout << "FragTrap " + name + " copied" << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " + name + " says: Can I get a high five?" << std::endl;
}