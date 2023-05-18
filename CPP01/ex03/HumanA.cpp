#include "HumanA.hpp"

HumanA::HumanA(std::string name_to_give, Weapon &club): wpn(club)
{
	name = name_to_give;
}

void	HumanA::attack()
{
	if (wpn.getType().empty())
		std::cout << name + " has no weapon to attack with" << std::endl;
	else
		std::cout << name + " attacks with their " + wpn.getType() << std::endl;
}