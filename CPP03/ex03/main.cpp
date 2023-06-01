#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap	Paulo("Paulo");
	std::cout << Paulo.getEnergypts() << std::endl;
	std::cout << Paulo.getHitpts() << std::endl;
	std::cout << Paulo.getAttdamage() << std::endl;
	Paulo.attack("Paulo");
	Paulo.whoAmI();
	Paulo.guardGate();
	Paulo.highFivesGuys();
}