#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat	Paulo("Pauleta", 1);
	AForm	*form1 = new PresidentialPardonForm("ola");
	AForm	*form2 = new RobotomyRequestForm("ola");
	AForm	*form3 = new ShrubberyCreationForm("ola");

	Paulo.signForm(*form1);
	Paulo.signForm(*form2);
	Paulo.signForm(*form3);

	std::cout << *form1;

	Paulo.executeForm(*form1);
	Paulo.executeForm(*form2);
	Paulo.executeForm(*form3);

	delete	form1;
	delete	form2;
	delete	form3;
}