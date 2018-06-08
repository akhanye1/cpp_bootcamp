/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhanye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 10:47:08 by akhanye           #+#    #+#             */
/*   Updated: 2018/06/06 11:36:01 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string colour, std::string weight) 
:_name(name), _colour(colour), _weight(weight)
{
	std::cout << "Hello thanks for initializing me ";
}

Pony::~Pony(void) {
	std::cout << this->_name << " died" << std::endl;
}

void	Pony::showName(void) const {
	std::cout << "My name is " << this->_name << ", ";
}

void	Pony::showColour(void) const {
	std::cout << "I am " << this->_colour << ", ";
}

void	Pony::showWeight(void) const {
	std::cout << "my weight!!! " << this->_weight << std::endl;
}
