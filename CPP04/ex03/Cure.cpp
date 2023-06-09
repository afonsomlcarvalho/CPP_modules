#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure &Cure::operator=(const Cure &copia)
{
	type = copia.type;
	equiped = copia.equiped;
	return (*this);
}

Cure::Cure(const Cure &copia) : AMateria("cure")
{
	*this = copia;
}

AMateria* Cure::clone() const
{
	AMateria *Pedro = new Cure();
	return (Pedro);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " + target.getName() + "'s wounds *" << std::endl;
}
