/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 12:27:33 by shulley           #+#    #+#             */
/*   Updated: 2017/05/29 16:33:49 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{

}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(std::string n, int g) : name(n)
{
	if (g < 1)
		throw GradeTooHighException();
	else if (g > 150)
		throw GradeTooLowException();
	else
		setGrade(g);
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
	*this = copy;
}

Bureaucrat Bureaucrat::operator=(Bureaucrat const &rhs)
{
	grade = rhs.grade;
	return *this;
}

void			Bureaucrat::setGrade(int g)
{
	grade = g;
}

int				Bureaucrat::getGrade(void)
{
	return grade;
}

std::string		Bureaucrat::getName(void)
{
	return name;
}

int			Bureaucrat::incrementGrade(void)
{
	if (grade < 2)
	{
		throw GradeTooHighException();
	}
	else
		return grade--;
}

int			Bureaucrat::decrementGrade(void)
{
	if (grade > 149)
	{
		throw GradeTooLowException();
	}
	else
		return grade++;
}

const char* 	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("grade is too high");
}

const char*		Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("grade is too low");
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &rhs)
{
	os << "<" << rhs.getName() << ">, " << "bureaucrat grade " << "<"
		<< rhs.getGrade() << ">" << std::endl;
	return os;
}
