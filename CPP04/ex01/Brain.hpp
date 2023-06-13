#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include "string"

class Brain
{
	std::string ideas[100];

public:
	Brain();
	Brain(const Brain &copia);
	Brain &operator=(const Brain &copia);
	~Brain();
};

#endif