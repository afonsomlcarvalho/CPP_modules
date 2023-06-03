#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat &copia);
	~WrongCat();
	WrongCat &operator=(const WrongCat &copia);
	void makeSound() const;
};

#endif