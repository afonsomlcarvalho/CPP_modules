#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat created" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copia)
{
	type = copia.type;
	std::cout << "WrongCat copied";
	return (*this);
}

WrongCat::WrongCat(const WrongCat &copia) : WrongAnimal()
{
	*this = copia;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructed" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}