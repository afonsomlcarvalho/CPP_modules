#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie (void)
{
}

Zombie::Zombie(std::string name_to_give)
{
	name = name_to_give;
}

Zombie::~Zombie()
{
	std::cout << name + " destructed" << std::endl;
}

void	Zombie::setName(std::string name_to_give)
{
	name = name_to_give;
}
