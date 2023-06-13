#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure &copia);
	~Cure();
	Cure &operator=(const Cure &copia);
	AMateria* clone() const;
	void use(ICharacter& target);
	void setEquiped(int i);
};

#endif