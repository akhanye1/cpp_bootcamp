/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap .hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhanye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 10:23:52 by akhanye           #+#    #+#             */
/*   Updated: 2018/06/08 16:41:44 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {
	private:
		void	_setDefaults(void);
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &);
		ScavTrap & operator=(ScavTrap const &);
		~ScavTrap(void);
		void			challengeNewcomer(std::string const & target);
};

#endif
