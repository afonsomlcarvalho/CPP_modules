#ifndef	HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
class HumanA
{
private:
	std::string	name;
	Weapon	&wpn;
public:
	HumanA(std::string name_to_give, Weapon &club);
	void	attack();
};

#endif