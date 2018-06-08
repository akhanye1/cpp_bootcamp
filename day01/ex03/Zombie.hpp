/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhanye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 12:20:58 by akhanye           #+#    #+#             */
/*   Updated: 2018/06/06 16:34:52 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
	private:
		std::string	_type;
		std::string	_name;
		std::string _sound;

	public:
		Zombie(void);
		void		announce(void) const;
		void		setType(std::string type);
		void		setName(std::string name);
};

#endif
