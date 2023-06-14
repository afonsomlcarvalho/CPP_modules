#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
	target = "default_target";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target_to_give) : AForm("PresidentialPardonForm", 25, 5)
{
	target = target_to_give;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copia)
{
	target = copia.target;
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copia) : AForm("PresidentialPardonForm", 25, 5)
{
	*this = copia;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::formExecution() const
{
	std::cout << target + " has been pardoned by Zaphod Beeblebrox." << std::endl;
}