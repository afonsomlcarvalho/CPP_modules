#include "Zombie.h"
#include <string>

class Zombie
{
	std::string	name;
public:
	Zombie(void);
	void	announce(void);
	Zombie(std::string name_to_give);
	~Zombie(void);
};