#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat	Paulo("Pauleta", 5);
	Form		Form1("Form1", 10, 98);
	Form		Form2("Form2", 1, 10);

	Paulo.signForm(Form1);
	Paulo.signForm(Form2);
}