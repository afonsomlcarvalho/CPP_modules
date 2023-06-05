#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain;
	std::cout << "Dog created" << std::endl;
}

Dog &Dog::operator=(const Dog &copia)
{
	type = copia.type;
	std::cout << "Dog copied";
	*brain = *copia.brain;
	return (*this);
}

Dog::Dog(const Dog &copia): AAnimal()
{
	*this = copia;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructed" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Ao Ao" << std::endl;
}