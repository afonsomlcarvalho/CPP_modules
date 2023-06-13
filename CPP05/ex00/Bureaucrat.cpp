#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : grade(DEFAULT_GRADE), name(DEFAULT_NAME)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copia) : grade(copia.getGrade()), name(copia.getName())
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(std::string name_to_give, int grade_to_give) : grade(grade_to_give), name(name_to_give)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {}

// Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copia)
// {
// 	name = copia.getName();
// 	grade = copia.getGrade();
// 	return (*this);
// }

const std::string Bureaucrat::getName() const
{
	return (name);
}

int	Bureaucrat::getGrade() const
{
	return (grade);
}

void	Bureaucrat::increment()
{
	if (grade == 1)
		throw Bureaucrat::GradeTooHighException();
	grade--;
}

void	Bureaucrat::decrecement()
{
	if (grade == 150)
		throw Bureaucrat::GradeTooHighException();
	grade++;
}

std::string	Bureaucrat::GradeTooHighException()
{
	return ("Grade too high");
}

std::string	Bureaucrat::GradeTooLowException()
{
	return ("Grade too low");
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &n)
{
	out << n.getName() + ", bureaucrat grade " << n.getGrade();
	return (out);
}