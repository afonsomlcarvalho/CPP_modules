#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &copia);
	PresidentialPardonForm(std::string target_to_give);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &copia);
	~PresidentialPardonForm();
	void	formExecution() const;
};

#endif