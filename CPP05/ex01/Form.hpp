#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	const std::string name;
	bool	_signed;
	const int grade_to_sign;
	const int grade_to_execute;

public:
	Form();
	Form(const Form &copia);
	Form(std::string name, int sign, int execute);
	~Form();
	Form &operator=(const Form &copia);
	std::string getName() const;
	bool getSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	void	beSigned(const Bureaucrat &Bur);
	struct	GradeTooHighException;
	struct	GradeTooLowException;
};

std::ostream	&operator<<(std::ostream &out, const Form &n);

#endif