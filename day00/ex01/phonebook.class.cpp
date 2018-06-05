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
#include <iomanip>
#include <string>
#include "phonebook.class.hpp"

Phonebook::Phonebook(void) {
}

// void	Phonebook::viewContacts(void) const {
// 	std::cout << "Printing empty values" << std::endl;
// }


int		Phonebook::getCounter(void) {
		return Phonebook::_counter;
}

void	Phonebook::_setName(std::string field, std::string *value) {
	std::cout << field << " : ";
	std::cin >> *value;
}

void	Phonebook::addContact(void) {
	std::string	temp;

	if (Phonebook::_counter > 7) {
		std::cout << "Maximum number of contacts reached" << std::endl;
		return ;
	}
	this->_setName("First Name", &this->_first_name);
	this->_setName("Last Name", &this->_last_name);
	this->_setName("Nickname", &this->_nickname);
	this->_setName("Login", &this->_login);
	this->_setName("Postal", &this->_postal);
	this->_setName("Email", &this->_email);
	this->_setName("Phone", &this->_phone);
	this->_setName("Birthdate", &this->_birthdate);
	this->_setName("Favourite meal", &this->_fav_meal);
	this->_setName("Underwear Colour", &this->_underwear_color);
	this->_setName("Darkest Secret", &this->_darkest_secret);
	Phonebook::_counter++;
}

void		Phonebook::_truncate(std::string str) const {
	int		i;
	char	temp[10];

	if (str.size() < 10) {
		std::cout << std::setw(10);
		std::cout << str;
		return ;
	}
	i = -1;
	while (++i < 8) {
		temp[i] = str[i];
	}
	temp[8] = '.';
	temp[9] = '\0';
	std::cout << std::setw(10);
	std::cout << temp;
}

void		Phonebook::viewContact(int i) const {
	std::cout << std::setw(10);
	std::cout << i;
	std::cout << " | ";
	// std::cout << std::setw(10);
	// std::cout << this->_first_name;
	this->_truncate(this->_first_name);
	std::cout << " | ";
	// std::cout << std::setw(10);
	// std::cout << this->_last_name;
	this->_truncate(this->_last_name);
	std::cout << " | ";
	// std::cout << std::setw(10);
	// std::cout << this->_nickname;
	this->_truncate(this->_nickname);
	std::cout << std::endl;
}


void		Phonebook::showDetails(void) const {
	
}
int			Phonebook::_counter = 0;
