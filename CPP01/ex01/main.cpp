#include "Zombie.hpp"

int	main()
{
	int	N = 4;
	int	i = 0;
	Zombie *Horde;

	Horde = zombieHorde(N, "Jasmim");
	while (i < N)
		Horde[i++].announce();
	delete[] Horde;
}
