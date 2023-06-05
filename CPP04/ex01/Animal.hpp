#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
protected:
	std::string	type;
	Brain *brain;

public:
	Animal();
	Animal(const Animal &copia);
	virtual ~Animal();
	Animal &operator=(const Animal &copia);
	virtual void	makeSound() const;
	std::string	getType() const;
};

#endif