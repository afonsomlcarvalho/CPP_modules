#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	Brain *brain;

public:
	Cat();
	Cat(const Cat &copia);
	~Cat();
	Cat &operator=(const Cat &copia);
	void makeSound() const;
};

#endif