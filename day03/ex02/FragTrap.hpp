/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhanye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 10:23:52 by akhanye           #+#    #+#             */
/*   Updated: 2018/06/08 16:42:10 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "ClapTrap.hpp"

class	Fragtrap : public ClapTrap {
	private:
		void	_setDefaults(void);
	public:
		Fragtrap(void);
		Fragtrap(std::string name);
		Fragtrap(Fragtrap const &);
		Fragtrap& operator=(Fragtrap const &);
		~Fragtrap(void);
		void			vaulthunter_dot_exe(std::string const & target);
};

#endif
