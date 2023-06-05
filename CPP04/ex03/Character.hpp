#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"

class Character : public ICharacter
{
	std::string name;
	AMateria	*slots[4];

public:
	Character();
	Character(std::string name_to_give);
	~Character();
	Character(const Character &copia);
	Character &operator=(const Character &copia);
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, Character& target);
};

#endif