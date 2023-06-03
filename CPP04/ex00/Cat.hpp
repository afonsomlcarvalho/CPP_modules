#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat &copia);
	~Cat();
	Cat &operator=(const Cat &copia);
	void makeSound() const;
};

#endif