#include "Zombie.h"
#include <string>

class Zombie
{
	std::string	name;
public:
	Zombie(void);
	void	announce(void);
	void	setName(std::string name_to_give);
	Zombie(std::string name_to_give);
	~Zombie(void);
};