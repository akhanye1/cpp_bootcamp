/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap .hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhanye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 10:23:52 by akhanye           #+#    #+#             */
/*   Updated: 2018/06/08 16:21:12 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <time.h>
#include <stdlib.h>

class	ScavTrap  {
	private:
		int				_hitPoints;
		int				_maxHitPoints;
		int				_energyPoints;
		int				_maxEnergyPoints;
		int				_level;
		std::string		_name;
		int				_meleeAttackDamage;
		int				_rangedAttackDamage;
		int				_armorDamageReduction;
		void			_setDefaults(void);

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &);
		ScavTrap & operator=(ScavTrap const &);
		~ScavTrap(void);
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
		void			challengeNewcomer(std::string const & target);
};

#endif
