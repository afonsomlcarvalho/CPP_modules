#include "HumanA.hpp"

HumanA::HumanA(std::string name_to_give, Weapon &club): wpn(club)
{
	name = name_to_give;
}

void	HumanA::attack()
{
	std::cout << name + " attacks with their " + wpn.getType() << std::endl;
}