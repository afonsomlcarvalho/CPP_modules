#include "Bureaucrat.hpp"

struct	Bureaucrat::GradeTooHighException : public std::exception
{
	const char * what () const throw () {
      return "Grade to High";
   	}
};

struct	Bureaucrat::GradeTooLowException : public std::exception
{
	const char * what () const throw () {
      return "Grade to Low";
   	}
};

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

void	Bureaucrat::decrement()
{
	if (grade == 150)
		throw Bureaucrat::GradeTooHighException();
	grade++;
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &n)
{
	out << n.getName() + ", bureaucrat grade " << n.getGrade();
	return (out);
}

void	Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << name + " signed " + form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << name + " couldn't sign " + form.getName() + " because " + e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << name + " executed " + form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
}