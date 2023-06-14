#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &copia);
	ShrubberyCreationForm(std::string target_to_give);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copia);
	~ShrubberyCreationForm();
	void	formExecution() const;
};

#endif