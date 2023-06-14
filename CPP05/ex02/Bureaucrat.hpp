#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "AForm.hpp"

#define DEFAULT_GRADE 75
#define DEFAULT_NAME "Jasmim"

class AForm;

class Bureaucrat
{
	int	grade;
	const std::string name;

public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat &copia);
	Bureaucrat(std::string name_to_give, int grade_to_give);
	~Bureaucrat();
	Bureaucrat &operator=(const Bureaucrat &copia);
	const std::string getName() const;
	int	getGrade() const;
	void	increment();
	void	decrecement();
	void	signForm(AForm &form);
	void	executeForm(AForm const & form);
	struct	GradeTooHighException;
	struct	GradeTooLowException;
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &n);

#endif