#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class AAnimal
{
protected:
	std::string	type;
	Brain *brain;

public:
	AAnimal();
	AAnimal(const AAnimal &copia);
	virtual ~AAnimal();
	AAnimal &operator=(const AAnimal &copia);
	virtual void	makeSound() const = 0;
	std::string	getType() const;
};

#endif