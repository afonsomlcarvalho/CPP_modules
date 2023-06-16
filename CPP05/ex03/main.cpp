#include "Intern.hpp"

int main()
{
	Intern	Saul;

	AForm	*PP = Saul.makeForm("presidential pardon", "Pauleta");

	PP->formExecution();
	std::cout << *PP << std::endl; 
}