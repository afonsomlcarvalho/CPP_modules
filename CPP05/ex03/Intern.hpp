#ifndef INTERN_HPP
# define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	AForm	*makePPF(std::string target);
	AForm	*makeRRF(std::string target);
	AForm	*makeSCF(std::string target);
	AForm	*(Intern::*f[3])(std::string target);
	std::string	names[3];
public:
	Intern();
	Intern(const Intern &copia);
	~Intern();
	Intern &operator=(const Intern &copia);
	AForm	*makeForm(std::string name, std::string target);
};

#endif