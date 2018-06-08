/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhanye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 13:44:20 by akhanye           #+#    #+#             */
/*   Updated: 2018/06/06 15:35:22 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int		main(void) {
	ZombieEvent zombies;
	Zombie		*myZombie = NULL;

	std::cout << "Showing zombie from ZombieEvent" << std::endl;
	zombies.setZombieType("Human");
	myZombie = zombies.newZombie("Random");
	myZombie->announce();
	std::cout << std::endl;
	std::cout << "Create random Zombie" << std::endl;
	zombies.randomChump();
	return (0);
}
