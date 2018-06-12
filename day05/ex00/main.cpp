/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhanye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 11:13:44 by akhanye           #+#    #+#             */
/*   Updated: 2018/06/12 13:40:37 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int		main(void) {
	try {
		Bureaucrat bureaucrat = Bureaucrat("Mike", 1);
		bureaucrat.addGrade();
		std::cout << "No Errors : ";
		std::cout << bureaucrat << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException & e) {
		std::cout << e.getMessage() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << e.getMessage() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << "Exception was found but not accounted for" << std::endl;
	}
	return (0);
}
