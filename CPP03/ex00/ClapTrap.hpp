#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
	std::string	name;
	int	hit_pts;
	int	energy_pts;
	int	att_damage;

public:
	ClapTrap(std::string name_to_give);
	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif