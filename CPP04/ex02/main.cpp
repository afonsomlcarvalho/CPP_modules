#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// AAnimal ola;

	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	
	delete j;
	delete i;
}