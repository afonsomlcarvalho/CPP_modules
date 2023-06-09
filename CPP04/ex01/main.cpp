#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// Dog Basic;
	// {
	// 	Dog temp = Basic;
	// }

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	
	delete j;
	delete i;
}