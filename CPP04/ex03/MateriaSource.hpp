#ifndef MATERIASOURCE
#define MATERIASOURCE

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	AMateria *knowledge[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource &copia);
	MateriaSource &operator=(const MateriaSource &copia);
	~MateriaSource();
	void learnMateria(AMateria* to_learn);
	AMateria* createMateria(std::string const & type);
};

#endif