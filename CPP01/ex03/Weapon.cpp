#include "Weapon.hpp"

const std::string	Weapon::getType()
{
	return ((const std::string)type);
}

void	Weapon::setType(std::string new_type)
{
	type = new_type;
}

Weapon::Weapon(std::string type_to_give)
{
	type = type_to_give;
}

Weapon::Weapon()
{
}