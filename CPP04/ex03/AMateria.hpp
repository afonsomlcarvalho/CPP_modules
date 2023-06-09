#ifndef AMATERIA_HPP
# define AMATERIA_HPP	

# include <iostream>
# include "ICharacter.hpp"

class ICharacter ;

class AMateria
{
protected:
	std::string type;

public:
	AMateria(std::string const & type_to_give);
	AMateria();
	virtual ~AMateria();
	AMateria(const AMateria &copia);
	AMateria &operator=(const AMateria &copia);
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target) = 0;
};

#endif