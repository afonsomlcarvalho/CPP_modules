#ifndef	HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
class HumanB
{
private:
	std::string	name;
	Weapon	*wpn;
public:
	HumanB(std::string name_to_give);
	~HumanB();
	void	attack();
	void	setWeapon(Weapon *club);
};

#endif