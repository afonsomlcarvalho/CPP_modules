#include "AForm.hpp"

struct	AForm::GradeTooHighException : public std::exception
{
	const char * what () const throw () {
      return "Grade to High";
   	}
};

struct	AForm::NotSigned : public std::exception
{
	const char * what () const throw () {
      return "form is not signed";
   	}
};

struct	AForm::GradeTooLowException : public std::exception
{
	const char * what () const throw () {
      return "Grade to Low";
   	}
};

AForm::AForm() : name(DEFAULT_NAME), _signed(0), grade_to_sign(DEFAULT_GRADE), grade_to_execute(DEFAULT_GRADE)
{
	if (grade_to_sign < 1 || grade_to_execute < 1)
		throw AForm::GradeTooHighException();
	if (grade_to_sign > 150 || grade_to_execute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &copia) : name(copia.getName()), _signed(copia.getSigned()), grade_to_sign(copia.getGradeToSign()), grade_to_execute(copia.getGradeToExecute())
{
	if (grade_to_sign < 1 || grade_to_execute < 1)
		throw AForm::GradeTooHighException();
	if (grade_to_sign > 150 || grade_to_execute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(std::string name_to_give, int sign, int execute) : name(name_to_give), _signed(0), grade_to_sign(sign), grade_to_execute(execute)
{
	if (grade_to_sign < 1 || grade_to_execute < 1)
		throw AForm::GradeTooHighException();
	if (grade_to_sign > 150 || grade_to_execute > 150)
		throw AForm::GradeTooLowException();
}

AForm::~AForm() {}

// AForm &AForm::operator=(const AForm &copia)
// {
// 	name = copia.name;
// 	grade_to_execute = copia.grade_to_execute;
// 	grade_to_sign = copia.grade_to_sign;
// 	_signed = copia._signed;
// 	return (*this);
// }

std::string AForm::getName() const
{
	return (name);
}

bool AForm::getSigned() const
{
	return (_signed);
}

int AForm::getGradeToSign() const
{
	return (grade_to_sign);
}

int AForm::getGradeToExecute() const
{
	return (grade_to_execute);
}

std::ostream	&operator<<(std::ostream &out, const AForm &n)
{
	out << "Form " + n.getName() + " is ";
	if (!n.getSigned())
		out << "not ";
	out << "signed. Its sign grade is " << n.getGradeToSign() << " and its execution grade is " << n.getGradeToExecute();
	return (out);
}

void	AForm::beSigned(const Bureaucrat &bur)
{
	if (bur.getGrade() > grade_to_sign)
		throw	AForm::GradeTooLowException();
	_signed = 1;
}

void	AForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > grade_to_execute)
		throw AForm::GradeTooLowException();
	if (!_signed)
		throw AForm::NotSigned();
	formExecution();
}