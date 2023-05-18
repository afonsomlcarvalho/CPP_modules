#include "Zombie.hpp"

int	main()
{
	Zombie	*Paulo;

	Paulo = newZombie("Paulo");
	(*Paulo).announce();
	randomChump("Malandro");
	delete Paulo;
}