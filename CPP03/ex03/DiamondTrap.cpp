#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name_to_give): ClapTrap(name_to_give + "_clap_name"), ScavTrap(name_to_give), FragTrap(name_to_give), name(name_to_give)
{
	energy_pts = 50;
	hit_pts = FragTrap::hit_pts;
	att_damage = FragTrap::att_damage;
	ClapTrap::name = name_to_give + "_clap_name";
	std::cout << "DiamondTrap " + name + " created" << std::endl;
}

DiamondTrap::DiamondTrap(): ClapTrap("with no name_clap_name"), ScavTrap(), FragTrap(), name("with no name")
{
	FragTrap::hit_pts = 100;
	energy_pts = ScavTrap::energy_pts;
	FragTrap::att_damage = 30;
	ClapTrap::name = "with no name_clap_name";
	std::cout << "DiamondTrap " + name + " created" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copia)
{
	ClapTrap::name = copia.ClapTrap::name;
	name = copia.name;
	hit_pts = copia.hit_pts;
	energy_pts = copia.energy_pts;
	att_damage = copia.att_damage;
	std::cout << "DiamondTrap " + name + " copied" << std::endl;
	return (*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap &copia): ClapTrap(copia.name + "_clap_name"), ScavTrap(copia.name), FragTrap(copia.name)
{
	*this = copia;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " + name + " destroyed" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "I am DiamondTrap " + name + " derived from ClapTrap " + ClapTrap::name << std::endl;;
}
