#include "HumanA.hpp"

HumanA::HumanA(std::string name_to_give, Weapon club)
{
	wpn = new Weapon;
	wpn = &club;
	name = name_to_give;
}

HumanA::HumanA()
{
	wpn = new Weapon;
}

HumanA::~HumanA()
{
	delete	wpn;
}

void	HumanA::attack()
{
	std::cout << name + " attacks with their " + (*wpn).getType() << std::endl;
}