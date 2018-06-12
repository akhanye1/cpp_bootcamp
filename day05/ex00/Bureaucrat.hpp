/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhanye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 12:20:45 by akhanye           #+#    #+#             */
/*   Updated: 2018/06/12 13:40:38 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class	Bureaucrat {
	private:
		std::string const	_name;
		int					_grade;
		int					_maxGrade;
		int					_minGrade;

	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & rhs);
		Bureaucrat & operator=(Bureaucrat const & rhs);
		~Bureaucrat(void);
		std::string getName(void) const;
		int			getGrade(void) const;
		void		addGrade(void);
		void		decreaseGrade(void);
		int			getMaxGrade(void) const;
		int			getMinGrade(void) const;

	class GradeTooHighException : public std::exception {
		private:
			std::string	const	_message;
		public:
			GradeTooHighException(void);
			GradeTooHighException(GradeTooHighException const & rhs);
			GradeTooHighException & operator=(GradeTooHighException const & rhs);
			~GradeTooHighException(void) _NOEXCEPT;
			virtual const char* what() const throw();
			std::string		getMessage(void) const;
	};

	class GradeTooLowException : public std::exception {
		private:
			std::string const	_message;
		public:
			GradeTooLowException(void);
			GradeTooLowException(GradeTooLowException const & rhs);
			GradeTooLowException & operator=(GradeTooLowException const & rhs);
			~GradeTooLowException(void) _NOEXCEPT;
			virtual const char *what() const throw();
			std::string		getMessage() const;
	};
};

std::ostream & operator <<(std::ostream & stream, Bureaucrat const & rhs);

#endif
