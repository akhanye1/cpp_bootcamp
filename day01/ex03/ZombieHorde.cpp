/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhanye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 12:40:27 by akhanye           #+#    #+#             */
/*   Updated: 2018/06/06 16:38:39 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <time.h>
#include <stdlib.h>

std::string		ZombieHorde::_getRandomName(void) {
	int			num;
	std::string	zombieNames[] = {"Khumo", "Mushagi", "Goodwill",
		"Katleho", "Coldheat"};

	num = rand() % 5;
	return (zombieNames[num]);
}

void			ZombieHorde::setZombieType(std::string zombieType) {
	this->_type = zombieType;
}

ZombieHorde::ZombieHorde(int num) {
	Zombie	zombie[num];

	srand(time(NULL));
	for (int i = 0; i < num; i++) {
		zombie[i].setName(this->_getRandomName());
		zombie[i].setType("Human");
		zombie[i].announce();
	}
}
