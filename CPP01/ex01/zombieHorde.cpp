#include "Zombie.h"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*Horde;
	int		i = 0;

	Horde = new Zombie[N];
	while (i < N)
	{
		Horde[i] = Zombie(name);
		i++;
	}
	return (Horde);
}