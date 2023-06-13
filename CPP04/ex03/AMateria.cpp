#include "AMateria.hpp"

AMateria::AMateria() 
{
	add_materia(this);
}

AMateria::~AMateria() {}

AMateria::AMateria(std::string const & type_to_give) : type(type_to_give), equiped(0)
{
	add_materia(this);
}

AMateria &AMateria::operator=(const AMateria &copia)
{
	(void) copia;
	return (*this);
}

AMateria::AMateria(const AMateria &copia)
{
	*this = copia;
	add_materia(this);
}

std::string const & AMateria::getType() const
{
	return (type);
}

void AMateria::setEquiped(int i)
{
	equiped = i;
}

int	AMateria::getEquiped() const
{
	return (equiped);
}
