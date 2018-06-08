/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhanye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 12:40:30 by akhanye           #+#    #+#             */
/*   Updated: 2018/06/06 15:35:17 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent {
	private:
		std::string	_getRandomName(void);
		std::string	_type;

	public:
		ZombieEvent(void);
		void	randomChump(void);
		void	setZombieType(std::string zombieType);
		Zombie	*newZombie(std::string name);
};

#endif
