#include "HumanB.hpp"

HumanB::HumanB(std::string name_to_give)
{
	name = name_to_give;
	wpn = new Weapon;
}

void	HumanB::attack()
{
	std::cout << name + " attacks with their " + wpn->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon club)
{
	*wpn = club;
}

HumanB::~HumanB()
{
	delete	wpn;
}