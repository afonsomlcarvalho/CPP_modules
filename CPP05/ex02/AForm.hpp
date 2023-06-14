#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	const std::string name;
	bool	_signed;
	const int grade_to_sign;
	const int grade_to_execute;

protected:
	std::string	target;

public:
	AForm();
	AForm(const AForm &copia);
	AForm(std::string name, int sign, int execute);
	virtual ~AForm();
	AForm &operator=(const AForm &copia);
	std::string getName() const;
	bool getSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	void	beSigned(const Bureaucrat &Bur);
	class	GradeTooHighException;
	class	GradeTooLowException;
	class	NotSigned;
	void execute(Bureaucrat const & executor) const;
	virtual void formExecution() const = 0;
};

std::ostream	&operator<<(std::ostream &out, const AForm &n);

#endif