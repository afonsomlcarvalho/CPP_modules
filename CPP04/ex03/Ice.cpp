#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice &Ice::operator=(const Ice &copia)
{
	type = copia.type;
	equiped = copia.equiped;
	return (*this);
}

Ice::Ice(const Ice &copia) : AMateria("ice")
{
	*this = copia;
}

AMateria* Ice::clone() const
{
	AMateria *Pedro = new Ice();
	return (Pedro);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}
