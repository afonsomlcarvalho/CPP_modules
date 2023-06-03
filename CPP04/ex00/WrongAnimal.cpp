#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "";
	std::cout << "WrongAnimal constructed" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructed" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copia)
{
	type = copia.type;
	std::cout << "WrongAnimal copied" << std::endl;
	return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal &copia)
{
	*this = copia;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "(generic animal sound)" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (type);
}