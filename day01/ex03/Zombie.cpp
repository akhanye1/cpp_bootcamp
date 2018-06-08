/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhanye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 12:20:30 by akhanye           #+#    #+#             */
/*   Updated: 2018/06/06 16:38:42 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
	this->_sound = "AAAAgggggghhhhhhh Brains";
}

void	Zombie::setName(std::string name) {
	this->_name = name;
}

void	Zombie::announce(void) const {
	std::cout << "<" << this->_name << " (" << this->_type << ")> " << this->_sound << std::endl;
}

void	Zombie::setType(std::string type) {
	this->_type = type;
}
