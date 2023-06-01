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
	~ClapTrap();
	ClapTrap();
	ClapTrap(const ClapTrap &copia);
	ClapTrap &operator=(const ClapTrap &clap);
	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	std::string getName() const;
	int	getHitpts() const;
	int	getEnergypts() const;
	int	getAttdamage() const;
};

#endif