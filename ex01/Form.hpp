#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Form {

	private:
		const std::string	name;
		bool			isSigned;
		const int		gradeToSign;
		const int		gradeToExec;
	public:
		Form(void);
		Form(const std::string, const int, const int);
		~Form(void);
		Form(Form const &copy);
		bool	getIsSigned(void);
		void	setIsSigned(bool);
		int	getGradeToSign(void);
		int	getGradeToExec(void);
		void	beSigned(Bureaucrat);
		

};

#ifndef
