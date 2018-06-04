/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhanye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 16:36:32 by akhanye           #+#    #+#             */
/*   Updated: 2018/06/04 16:40:06 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "phonebook.class.hpp"

Phonebook::Phonebook(void) {
	std::cout << "Constructor Called"	 << std::endl;
}

void	Phonebook::printContact(void) const {
	std::cout << "Printing empty values" << std::endl;
}

int	Phonebook::getCounter(void) {
		return Phonebook::_counter;
}

void	Phonebook::setFirstName(std::String firstName) {
		this->_first_name = firstName;
}

void	Phonebook::setLastName(std::String lastName) {
		this->_last_name = lastName;
}

void	Phonebook::setNickname(std::String nickName) {
		this->_nickname = nickName;
}

void	Phonebook::setLastName(std::String lastName) {
		this->_last_name = lastName;
}


int	Phonebook::_counter = 0;
