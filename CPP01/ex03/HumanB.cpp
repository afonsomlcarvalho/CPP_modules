#include "HumanB.hpp"

HumanB::HumanB(std::string name_to_give)
{
	name = name_to_give;
	wpn = NULL;
}

void	HumanB::attack()
{
	if (!wpn || wpn->getType().empty())
		std::cout << name + " has no weapon to attack with" << std::endl;
	else
		std::cout << name + " attacks with their " + wpn->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon *club)
{
	wpn = club;
}

HumanB::~HumanB()
{
}