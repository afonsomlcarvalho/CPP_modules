#include "Zombie.h"

int	main()
{
	Zombie	*Paulo;

	Paulo = newZombie("Paulo");
	(*Paulo).announce();
	randomChump("Malandro");
	std::cout << "ola" << std::endl;
	delete Paulo;
}