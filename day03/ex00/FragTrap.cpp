/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhanye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 10:23:50 by akhanye           #+#    #+#             */
/*   Updated: 2018/06/08 15:57:41 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void	Fragtrap::_setDefaults(void) {
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 30;
	this->_armorDamageReduction = 5;
}

Fragtrap::Fragtrap(void) {
	this->_name = "Nameless Jack";
	std::cout << "<Nameless Jack> has start bootup sequence" << std::endl;
	this->_setDefaults();
}

Fragtrap::Fragtrap(std::string name) : _name(name) {
	std::cout << "Start bootup sequence [" << this->_name << "]" << std::endl;
	this->_setDefaults();
}

Fragtrap::~Fragtrap(void) {
	std::cout << this->_name << " : I'll die the way I lived::annoying!!!" << std::endl;
}

Fragtrap::Fragtrap(Fragtrap const & rhs) {
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

Fragtrap&	Fragtrap::operator=(Fragtrap const & rhs) {
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

int			Fragtrap::getHitPoints(void) const {
	return (this->_hitPoints);
}

int			Fragtrap::getMaxHitPoints(void) const {
	return (this->_maxHitPoints);
}

int			Fragtrap::getEnergyPoints(void) const {
	return (this->_energyPoints);
}

int			Fragtrap::getMaxEnergyPoints(void) const {
	return (this->_maxEnergyPoints);
}

int			Fragtrap::getLevel(void) const {
	return (this->_level);
}

std::string	Fragtrap::getName(void) const {
	return (this->_name);
}

int			Fragtrap::getMeleeAttackDamage(void) const {
	return (this->_meleeAttackDamage);
}

int			Fragtrap::getRangedAttackDamage(void) const {
	return (this->_rangedAttackDamage);
}

int			Fragtrap::getArmorDamageReduction(void) const {
	return (this->_armorDamageReduction);
}

void		Fragtrap::takeDamage(unsigned int amount) {
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << "Good thing I don't have a soul! :: You just took ";
	std::cout << amount << " healt from me, how do you live with yourself! ";
	std::cout << " remaining health. >> " << this->_hitPoints << std::endl;
}

void		Fragtrap::rangedAttack(std::string const & target) {
	if (this->_energyPoints == 0) {
		std::cout << "I am too hungry to attack" << std::endl;
		return ;
	}
	this->_hitPoints -= (this->_rangedAttackDamage - this->_armorDamageReduction);
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << "I'm leaking :: ";
	std::cout << "FR4G-TP " << this->_name;
   	std::cout << " Ranged attacks " << target;
	std::cout << " @  " << this->_rangedAttackDamage;
	std::cout << " causing health to be " << this->_hitPoints << std::endl;
	this->_energyPoints -= 10;
	if (this->_energyPoints < 0)
		this->_energyPoints = 0;
}

void		Fragtrap::meleeAttack(std::string const & target) {
	if (this->_energyPoints == 0) {
		std::cout << "I am too hungry to attack" << std::endl;
		return ;
	}
	this->_hitPoints -= (this->_meleeAttackDamage - this->_armorDamageReduction);
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << "Aww ::";
	std::cout << "FR4G-TP " << this->_name;
   	std::cout << " Melee attacks " << target;
	std::cout << " @ " << this->_meleeAttackDamage;
	std::cout << " causing health to be " << this->_hitPoints << std::endl;
	this->_energyPoints -= 10;
	if (this->_energyPoints < 0)
		this->_energyPoints = 0;
}

void		Fragtrap::beRepaired(unsigned int amount) {
	this->_energyPoints += 20;
	if (this->_energyPoints > this->_maxEnergyPoints)
		this->_energyPoints = this->_maxEnergyPoints;
	this->_hitPoints += amount;
	if (this->_hitPoints > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	else if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << "You cant keep " << this->_name << " Down";
	std::cout << " current health " << this->_hitPoints << std::endl;
}

void		Fragtrap::vaulthunter_dot_exe(std::string const & target) {
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
