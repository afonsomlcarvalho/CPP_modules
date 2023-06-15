#include "Character.hpp"

Character::Character() : name("Pauleta")
{
	for (int i = 0; i < 4; i++)
		slots[i] = NULL;
}

Character::Character(std::string name_to_give) : name(name_to_give)
{
	for (int i = 0; i < 4; i++)
		slots[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete slots[i];
}

Character::Character(const Character &copia)
{
	*this = copia;
}

Character &Character::operator=(const Character &copia)
{
	name = copia.name;
	for (int i = 0; i < 4; i++)
	{
		if (slots[i])
			delete slots[i];
		*slots[i] = *copia.slots[i];
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (name);
}

void Character::equip(AMateria* m)
{
	int	i = 0;

	while (i < 4 && slots[i])
		i++;
	if (i < 4)
	{
		slots[i] = m;
		m->setEquiped(1);
	}
}

void Character::unequip(int idx)
{
	slots[idx]->setEquiped(0);
	slots[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (slots[idx])
		slots[idx]->use(target);
}