#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const & type_to_give) : type(type_to_give) {}

AMateria &AMateria::operator=(const AMateria &copia)
{
	return (*this);
}

AMateria::AMateria(const AMateria &copia)
{
	*this = copia;
}

std::string const & AMateria::getType() const
{
	return (type);
}