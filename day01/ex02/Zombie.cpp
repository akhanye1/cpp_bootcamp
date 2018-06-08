/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhanye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 12:20:30 by akhanye           #+#    #+#             */
/*   Updated: 2018/06/06 15:37:38 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
	this->_sound = "Aaaaaaggggghhhhh Brains";
}

void	Zombie::announce(void) const {
	std::cout << "<" << this->_name << " (" << this->_type << ")> " << this->_sound << std::endl;
}

void	Zombie::setType(std::string type) {
	this->_type = type;
}
