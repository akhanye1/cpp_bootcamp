/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhanye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 10:23:52 by akhanye           #+#    #+#             */
/*   Updated: 2018/06/08 16:46:47 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <time.h>
#include <stdlib.h>

class	ClapTrap {
	protected:
		int				_hitPoints;
		int				_maxHitPoints;
		int				_energyPoints;
		int				_maxEnergyPoints;
		int				_level;
		std::string		_name;
		int				_meleeAttackDamage;
		int				_rangedAttackDamage;
		int				_armorDamageReduction;

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &);
		ClapTrap& operator=(ClapTrap const &);
		~ClapTrap(void);
		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		int				getHitPoints(void) const;
		int				getMaxHitPoints(void) const;
		int				getEnergyPoints(void) const;
		int				getMaxEnergyPoints(void) const;
		int				getLevel(void) const;
		std::string		getName(void) const;
		int				getMeleeAttackDamage(void) const;
		int				getRangedAttackDamage(void) const;
		int				getArmorDamageReduction(void) const;
		void			vaulthunter_dot_exe(std::string const & target);
};

#endif
