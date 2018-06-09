/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhanye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 10:23:50 by akhanye           #+#    #+#             */
/*   Updated: 2018/06/08 18:00:57 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

void	NinjaTrap::_setDefaults(void) {
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 30;
	this->_armorDamageReduction = 5;
}

NinjaTrap::NinjaTrap(void) {
	this->_name = "Nameless Jack";
	std::cout << "<Nameless Jack> has start bootup sequence" << std::endl;
	this->_setDefaults();
}

NinjaTrap::NinjaTrap(std::string name) {
	this->_name = name;
	std::cout << "Start bootup sequence [" << this->_name << "]" << std::endl;
	this->_setDefaults();
}

NinjaTrap::~NinjaTrap(void) {
	std::cout << this->_name << " : I'll die the way I lived::annoying!!!" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & rhs) {
	this->_hitPoints = rhs.getHitPoints();
	this->_maxHitPoints = rhs.getMaxHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_level = rhs.getLevel();
	this->_name = rhs.getName();
	this->_meleeAttackDamage = rhs.getMeleeAttackDamage();
	this->_rangedAttackDamage = rhs.getRangedAttackDamage();
	this->_armorDamageReduction = rhs.getArmorDamageReduction();
	std::cout << "You're the wub to my dub!" << std::endl;
}

NinjaTrap&	NinjaTrap::operator=(NinjaTrap const & rhs) {
	this->_hitPoints = rhs.getHitPoints();
	this->_maxHitPoints = rhs.getMaxHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_level = rhs.getLevel();
	this->_name = rhs.getName();
	this->_meleeAttackDamage = rhs.getMeleeAttackDamage();
	this->_rangedAttackDamage = rhs.getRangedAttackDamage();
	this->_armorDamageReduction = rhs.getArmorDamageReduction();
	std::cout << "Holy crap " << this->_name << ", that worked?" << std::endl;
	return *this;
}

void		NinjaTrap::NinjaTrap(std::string const & target) {
	std::string randomAttack[] = {
		"Place your bet", "Running the sequencer", "Lets get this party started",
		"Loading combat packages", "I am a robot ninja"
		};

	if (this->_energyPoints < 25) {
		std::cout << "AHHH just forget it, you attack *(running away)" << std::endl;
		return ;
	}
	std::cout << randomAttack[rand() % 5] << " ATTACK ATTACK :: ";
	if ((rand() % 2) == 0)
		this->rangedAttack(target);
	else
		this->meleeAttack(target);
	this->_energyPoints -= 25;
	if (this->_energyPoints < 0)
		this->_energyPoints = 0;
}
