#include "Intern.hpp"

Intern::Intern()
{
	f[0] = &Intern::makePPF;
	f[1] = &Intern::makeRRF;
	f[2] = &Intern::makeSCF;
	names[0] = "presidential pardon";
	names[1] = "robotomy request";
	names[2] = "shrubbery creation";
}

Intern::Intern(const Intern &copia)
{
	*this = copia;
}

Intern::~Intern() {}

Intern &Intern::operator=(const Intern &copia)
{
	for (int i = 0; i < 3; i++)
	{
		f[i] = copia.f[i];
		names[i] = copia.names[i];
	}
	return (*this);
}

AForm *Intern::makePPF(std::string target)
{
	AForm	*Pedro = new PresidentialPardonForm(target);
	return (Pedro);
}

AForm *Intern::makeRRF(std::string target)
{
	AForm	*Pedro = new RobotomyRequestForm(target);
	return (Pedro);
}

AForm *Intern::makeSCF(std::string target)
{
	AForm	*Pedro = new ShrubberyCreationForm(target);
	return (Pedro);
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	int	i;
	for (i = 0; i < 3; i++)
	{
		if (!name.compare(names[i]))
			break;
	}
	switch (i)
	{
	case 3:
		std::cout << "No form with that name" << std::endl;
		return (NULL);
	
	default:
		return ((this->*f[i])(target));
		break;
	}
}
