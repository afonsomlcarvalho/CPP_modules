#include "Form.hpp"

Form::Form() : name(DEFAULT_NAME), _signed(0), grade_to_sign(DEFAULT_GRADE), grade_to_execute(DEFAULT_GRADE) {}

Form::Form(const Form &copia) : name(copia.getName()), _signed(copia.getSigned()), grade_to_sign(copia.getGradeToSign()), grade_to_execute(copia.getGradeToExecute()) {}


