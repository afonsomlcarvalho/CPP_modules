#include "RobotomyRequestForm.hpp"
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	target = "default_target";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target_to_give) : AForm("RobotomyRequestForm", 72, 45)
{
	target = target_to_give;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copia)
{
	target = copia.target;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copia) : AForm("RobotomyRequestForm", 72, 45)
{
	*this = copia;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::formExecution() const
{
	std::cout << "* drilling noises *" << std::endl;
	if (rand() % 2)
		std::cout << target + " has been successfully robotomized" << std::endl;
	else
		std::cout << "robotomy failed" << std::endl;
}