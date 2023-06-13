#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice &copia);
	~Ice();
	Ice &operator=(const Ice &copia);
	AMateria* clone() const;
	void use(ICharacter& target);
	void setEquiped(int i);
};

#endif