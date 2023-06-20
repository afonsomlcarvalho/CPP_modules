#include "Form.hpp"

struct	Form::GradeTooHighException : public std::exception
{
	const char * what () const throw () {
      return "Grade to High";
   	}
};

struct	Form::GradeTooLowException : public std::exception
{
	const char * what () const throw () {
      return "Grade to Low";
   	}
};

Form::Form() : name(DEFAULT_NAME), _signed(0), grade_to_sign(DEFAULT_GRADE), grade_to_execute(DEFAULT_GRADE)
{
	if (grade_to_sign < 1 || grade_to_execute < 1)
		throw Form::GradeTooHighException();
	if (grade_to_sign > 150 || grade_to_execute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &copia) : name(copia.getName()), _signed(copia.getSigned()), grade_to_sign(copia.getGradeToSign()), grade_to_execute(copia.getGradeToExecute())
{
	if (grade_to_sign < 1 || grade_to_execute < 1)
		throw Form::GradeTooHighException();
	if (grade_to_sign > 150 || grade_to_execute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(std::string name_to_give, int sign, int execute) : name(name_to_give), _signed(0), grade_to_sign(sign), grade_to_execute(execute)
{
	if (grade_to_sign < 1 || grade_to_execute < 1)
		throw Form::GradeTooHighException();
	if (grade_to_sign > 150 || grade_to_execute > 150)
		throw Form::GradeTooLowException();
}

Form::~Form() {}

Form &Form::operator=(const Form &copia)
{
	_signed = copia._signed;
	return (*this);
}

std::string Form::getName() const
{
	return (name);
}

bool Form::getSigned() const
{
	return (_signed);
}

int Form::getGradeToSign() const
{
	return (grade_to_sign);
}

int Form::getGradeToExecute() const
{
	return (grade_to_execute);
}

std::ostream	&operator<<(std::ostream &out, const Form &n)
{
	out << "Form " + n.getName() + " is ";
	if (!n.getSigned())
		out << "not ";
	out << "signed. Its sign grade is " << n.getGradeToSign() << " and its execution grade is " << n.getGradeToExecute();
	return (out);
}

void	Form::beSigned(const Bureaucrat &bur)
{
	if (bur.getGrade() > grade_to_sign)
		throw	Form::GradeTooLowException();
	_signed = 1;
}
