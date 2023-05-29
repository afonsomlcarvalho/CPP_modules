#include "ClapTrap.hpp"

int	main()
{
	ClapTrap Miguel("Miguel");
	ClapTrap Leandro = Miguel;

	Miguel.attack("Paulo");
	// Miguel.attack("Paulo");
	// Miguel.attack("Paulo");
	// Miguel.attack("Paulo");
	// Miguel.attack("Paulo");
	// Miguel.attack("Paulo");
	// Miguel.attack("Paulo");
	// Miguel.attack("Paulo");
	// Miguel.attack("Paulo");
	// Miguel.attack("Paulo");
	// Miguel.attack("Paulo");
	Miguel.takeDamage(15);
	Miguel.beRepaired(20);
	std::cout << Leandro.getHitpts() << std::endl;
}