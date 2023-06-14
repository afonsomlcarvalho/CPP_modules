#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern &copia);
	~Intern();
	Intern &operator=(const Intern &copia);
	AForm	*makeForm(std::string name, std::string target);
};

#endif