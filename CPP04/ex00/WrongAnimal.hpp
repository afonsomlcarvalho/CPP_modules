#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>

class WrongAnimal
{
protected:
	std::string	type;

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &copia);
	virtual ~WrongAnimal();
	WrongAnimal &operator=(const WrongAnimal &copia);
	void	makeSound() const;
	std::string	getType() const;
};

#endif