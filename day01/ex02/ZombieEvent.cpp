/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhanye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 12:40:27 by akhanye           #+#    #+#             */
/*   Updated: 2018/06/06 15:47:34 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <time.h>
#include <stdlib.h>

std::string		ZombieEvent::_getRandomName(void) {
	int			num;
	std::string	zombieNames[] = {"Khumo", "Mushagi", "Goodwill",
		"Katleho", "Coldheat"};

	srand(time(NULL));
	num = rand() % 5;
	return (zombieNames[num]);
}

void			ZombieEvent::randomChump(void) {	
	Zombie	tempZombie = Zombie(this->_getRandomName());

	tempZombie.setType(this->_type);
	tempZombie.announce();
}

void			ZombieEvent::setZombieType(std::string zombieType) {
	this->_type = zombieType;
}

Zombie*			ZombieEvent::newZombie(std::string name) {
	Zombie	*zombie = new Zombie(name);
	zombie->setType(this->_type);

	return (zombie);
}

ZombieEvent::ZombieEvent(void) {
}
