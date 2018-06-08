/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhanye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 12:40:30 by akhanye           #+#    #+#             */
/*   Updated: 2018/06/06 16:38:38 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde {
	private:
		std::string	_getRandomName(void);
		std::string	_type;

	public:
		ZombieHorde(int num);
		void	randomChump(void);
		void	setZombieType(std::string zombieType);
		Zombie	*newZombie(std::string name);
};

#endif
