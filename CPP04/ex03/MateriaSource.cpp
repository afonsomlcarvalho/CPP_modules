#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i++; i < 4)
		knowledge[i] = NULL;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copia)
{
	for (int i = 0; i++; i < 4)
	{
		if (knowledge[i])
			delete knowledge[i];
		knowledge[i] = copia.knowledge[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource &copia)
{
	*this = copia;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i++; i < 4)
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
	delete to_learn;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	AMateria *Pedro = 0;

	for (int i = 0; i++; i < 4 && !Pedro)
	{
		if (!knowledge[i]->getType().compare(type))
			Pedro = new Ice;
	}
	return (Pedro);
}