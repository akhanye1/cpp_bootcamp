/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhanye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 10:04:13 by akhanye           #+#    #+#             */
/*   Updated: 2018/06/12 13:40:35 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name(""), _grade(1), _maxGrade(1), _minGrade(150) { }

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade), _maxGrade(1), _minGrade(150) {
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & rhs) : _name(rhs.getName()) { *this = rhs; }

Bureaucrat	&	Bureaucrat::operator=(Bureaucrat const & rhs)  {
	this->_grade = rhs.getGrade();
	this->_maxGrade = rhs.getMaxGrade();
	this->_minGrade = rhs.getMinGrade();
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return (*this);
}

Bureaucrat::~Bureaucrat(void) { }

std::string		Bureaucrat::getName(void) const { return (this->_name); }
int				Bureaucrat::getGrade(void) const { return (this->_grade); }

void			Bureaucrat::addGrade(void) {
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void			Bureaucrat::decreaseGrade(void) {
	this->_grade++;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void) :
	_message("Grade too High Exception") { }

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const & rhs) :
	_message(rhs.getMessage()) { }

Bureaucrat::GradeTooHighException &	Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &) {
	return (*this);
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) _NOEXCEPT{ }

Bureaucrat::GradeTooLowException::GradeTooLowException(void) : _message("Grade too Low Exception") { }

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const & rhs) :
	_message(rhs.getMessage()) { }

Bureaucrat::GradeTooLowException &	Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &) {
	return (*this);
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) _NOEXCEPT{ }

const char* Bureaucrat::GradeTooHighException:: what() const throw() {
	return ((const char*)&this->_message);
}

const char* Bureaucrat::GradeTooLowException:: what() const throw() {
	return ((const char*)&this->_message);
}

int		Bureaucrat::getMaxGrade(void) const	{ return (this->_maxGrade); }
int		Bureaucrat::getMinGrade(void) const	{ return (this->_minGrade); }

std::ostream & operator <<(std::ostream & stream, Bureaucrat const & rhs){
	stream << rhs.getName() << ", bureaucrat grade < " << rhs.getGrade() << " >";
    return (stream);
}

std::string		Bureaucrat::GradeTooLowException::getMessage(void) const { return this->_message; }
std::string		Bureaucrat::GradeTooHighException::getMessage(void) const { return this->_message; }
