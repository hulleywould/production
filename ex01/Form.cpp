#include "Form.hpp"

Form::Form()
{
	setIsSigned(false);	
}

Form::Form(Form cont &copy)
{
	*this = copy;
}

Form::Form(const std::string n,
	const int toSign,
	const int toExec)
	: name(n),
	gradeToSign(toSign),
	gradeToExec(toExec)
{
	setIsSigned(false);
}

Form::~Form(void)
{
}

bool	Form::getIsSigned(void)
{
	return isSign;
}

void	Form::setIsSigned(bool sign)
{
	isSigned = sign;
}

bool	Form::getGradeToSign(void)
{
	return gradeToSign;
}

bool	Form::getGradeToExec(void)
{
	return gradeToExec;
}

void	Form::beSigned(Bureaucrat crat)
{
	crat.signForm();
}

