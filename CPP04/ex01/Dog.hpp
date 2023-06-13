#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	Brain *brain;
	
public:
	Dog();
	Dog(const Dog &copia);
	~Dog();
	Dog &operator=(const Dog &copia);
	void makeSound() const;
};

#endif