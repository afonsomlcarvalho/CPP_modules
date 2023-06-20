#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat	Paulo("Pauleta", 5);
	Form		Form1("Form1", 10, 98);
	Form		Form2("Form2", 1, 10);

	std::cout << Form1 << std::endl;
	std::cout << Form2 << std::endl;
	Paulo.signForm(Form1);
	Paulo.signForm(Form2);
	std::cout << Form1 << std::endl;
	std::cout << Form2 << std::endl;
}