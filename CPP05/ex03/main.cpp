#include "Intern.hpp"

int main()
{
	Intern	Saul;

	AForm	*PP = Saul.makeForm("presidential pardon", "Pauleta");
	AForm	*SC = Saul.makeForm("shrubbery creation", "Pauleta");
	AForm	*RR = Saul.makeForm("robotomy request", "Pauleta");
	AForm	*NE = Saul.makeForm("ola", "Pauleta");

	(void) NE;
	std::cout << *PP << std::endl; 
	std::cout << *SC << std::endl; 
	std::cout << *RR << std::endl;
}