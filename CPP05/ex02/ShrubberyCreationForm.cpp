#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	target = "default_target";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target_to_give) : AForm("ShrubberyCreationForm", 145, 137)
{
	target = target_to_give;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copia)
{
	target = copia.target;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copia) : AForm("ShrubberyCreationForm", 145, 137)
{
	*this = copia;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::formExecution() const
{
	std::ofstream	file;
	file.open((target + "_shrubbery").c_str(), std::ios::out);
	if (file.fail())
	{
		std::cout << "Error opening infile" << std::endl;
		return ;
	}
	file << "    oxoxoo    ooxoo\n  ooxoxo oo  oxoxooo\n oooo xxoxoo ooo ooox\n oxo o oxoxo  xoxxoxo\n  oxo xooxoooo o ooo\n    ooo\\oo\\  /o/o\n        \\  \\/ /\n         |   /\n         |  |\n         | D|\n         |  |\n         |  |\n  ______/____\\____\n";
	file.close();
}
