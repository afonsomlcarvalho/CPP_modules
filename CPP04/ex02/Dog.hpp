#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"

class Dog : public AAnimal
{
public:
	Dog();
	Dog(const Dog &copia);
	~Dog();
	Dog &operator=(const Dog &copia);
	void makeSound() const;
};

#endif