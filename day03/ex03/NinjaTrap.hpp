/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhanye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 10:23:52 by akhanye           #+#    #+#             */
/*   Updated: 2018/06/08 18:02:32 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	NinjaTrap : public ClapTrap {
	private:
		void			_setDefaults(void);
	public:
		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const &);
		NinjaTrap& operator=(NinjaTrap const &);
		~NinjaTrap(void);
		void			ninjaShoebox(Fragtrap &);
		void			ninjaShoebox(ScavTrap &);
		void			ninjaShoebox(std::string &);
};

#endif
