#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		knowledge[i] = NULL;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copia)
{
	for (int i = 0; i < 4; i++)
	{
		if (knowledge[i])
			delete knowledge[i];
		knowledge[i] = copia.knowledge[i];
	}
	return (*this);
}

MateriaSource::MateriaSource(const MateriaSource &copia)
{
	*this = copia;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (knowledge[i])
			delete knowledge[i];
	}
}

void MateriaSource::learnMateria(AMateria* to_learn)
{
	int	i = 0;
	while (i < 4 && knowledge[i])
		i++;
	if (i < 4)
		knowledge[i] = to_learn->clone();
	knowledge[i]->setEquiped(1);
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	AMateria *Pedro = 0;

	for (int i = 0; i < 4 && !Pedro; i++)
	{
		if (!knowledge[i]->getType().compare(type) && !type.compare("ice"))
			Pedro = new Ice;
		else if (!knowledge[i]->getType().compare(type) && !type.compare("cure"))
			Pedro = new Cure;
	}
	return (Pedro);
}