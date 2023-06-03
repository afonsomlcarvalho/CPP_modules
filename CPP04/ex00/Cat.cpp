#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat created" << std::endl;
}

Cat &Cat::operator=(const Cat &copia)
{
	type = copia.type;
	std::cout << "Cat copied";
	return (*this);
}

Cat::Cat(const Cat &copia) : Animal()
{
	*this = copia;
}

Cat::~Cat()
{
	std::cout << "Cat destructed" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}