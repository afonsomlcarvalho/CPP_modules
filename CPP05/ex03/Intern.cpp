#include "Intern.hpp"

Intern::Intern() {}
Intern::Intern(const Intern &copia) {}
Intern::~Intern() {}
Intern &Intern::operator=(const Intern &copia) {return (*this);}


AForm	*Intern::makeForm(std::string name, std::string target)
{
	new AForm Paulo;

	return (Paulo);
}
