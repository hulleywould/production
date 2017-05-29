/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 12:28:25 by shulley           #+#    #+#             */
/*   Updated: 2017/05/29 16:23:54 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat {

	private:
		const std::string	name; //must make const
		int					grade;
	public:
		Bureaucrat(void);
		Bureaucrat(std::string,int);
		Bureaucrat(Bureaucrat const &copy);
		~Bureaucrat(void);
		std::string getName(void);
		int			getGrade(void);
		void		setGrade(int);
		int		incrementGrade(void);
		int		decrementGrade(void);
		void		signForm(void);
		Bureaucrat	operator=(Bureaucrat const &rhs);

	class	GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class	GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw();
	};

};

std::ostream &operator<<(std::ostream &os, Bureaucrat &rhs);

#endif
