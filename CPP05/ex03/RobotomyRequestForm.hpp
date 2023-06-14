#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &copia);
	RobotomyRequestForm(std::string target_to_give);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &copia);
	~RobotomyRequestForm();
	void	formExecution() const;
};

#endif