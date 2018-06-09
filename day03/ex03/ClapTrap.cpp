/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhanye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 10:23:50 by akhanye           #+#    #+#             */
/*   Updated: 2018/06/08 16:50:39 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

ClapTrap::ClapTrap(void) {
	this->_name = "Nameless Jack";
	std::cout << "Parent :: <Nameless Jack> has start bootup sequence" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name) {
	std::cout << "Parent :: Start bootup sequence [" << this->_name << "]" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Parent :: ";
	std::cout << this->_name << " : I'll die the way I lived::annoying!!!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & rhs) {
	this->_hitPoints = rhs.getHitPoints();
	this->_maxHitPoints = rhs.getMaxHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_level = rhs.getLevel();
	this->_name = rhs.getName();
	this->_meleeAttackDamage = rhs.getMeleeAttackDamage();
	this->_rangedAttackDamage = rhs.getRangedAttackDamage();
	this->_armorDamageReduction = rhs.getArmorDamageReduction();
	std::cout << "Parent :: You're the wub to my dub!" << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const & rhs) {
	this->_hitPoints = rhs.getHitPoints();
	this->_maxHitPoints = rhs.getMaxHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_level = rhs.getLevel();
	this->_name = rhs.getName();
	this->_meleeAttackDamage = rhs.getMeleeAttackDamage();
	this->_rangedAttackDamage = rhs.getRangedAttackDamage();
	this->_armorDamageReduction = rhs.getArmorDamageReduction();
	std::cout << "Parent :: Holy crap " << this->_name << ", that worked?" << std::endl;
	return *this;
}

int			ClapTrap::getHitPoints(void) const {
	return (this->_hitPoints);
}

int			ClapTrap::getMaxHitPoints(void) const {
	return (this->_maxHitPoints);
}

int			ClapTrap::getEnergyPoints(void) const {
	return (this->_energyPoints);
}

int			ClapTrap::getMaxEnergyPoints(void) const {
	return (this->_maxEnergyPoints);
}

int			ClapTrap::getLevel(void) const {
	return (this->_level);
}

std::string	ClapTrap::getName(void) const {
	return (this->_name);
}

int			ClapTrap::getMeleeAttackDamage(void) const {
	return (this->_meleeAttackDamage);
}

int			ClapTrap::getRangedAttackDamage(void) const {
	return (this->_rangedAttackDamage);
}

int			ClapTrap::getArmorDamageReduction(void) const {
	return (this->_armorDamageReduction);
}

void		ClapTrap::takeDamage(unsigned int amount) {
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << "Parent :: Good thing I don't have a soul! :: You just took ";
	std::cout << amount << " healt from me, how do you live with yourself! ";
	std::cout << " remaining health. >> " << this->_hitPoints << std::endl;
}

void		ClapTrap::rangedAttack(std::string const & target) {
	if (this->_energyPoints == 0) {
		std::cout << "Parent :: I am too hungry to attack" << std::endl;
		return ;
	}
	this->_hitPoints -= (this->_rangedAttackDamage - this->_armorDamageReduction);
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << "Parent :: I'm leaking :: ";
	std::cout << "FR4G-TP " << this->_name;
   	std::cout << " Ranged attacks " << target;
	std::cout << " @  " << this->_rangedAttackDamage;
	std::cout << " causing health to be " << this->_hitPoints << std::endl;
	this->_energyPoints -= 10;
	if (this->_energyPoints < 0)
		this->_energyPoints = 0;
}

void		ClapTrap::meleeAttack(std::string const & target) {
	if (this->_energyPoints == 0) {
		std::cout << "Parent :: I am too hungry to attack" << std::endl;
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

void		ClapTrap::beRepaired(unsigned int amount) {
	this->_energyPoints += 20;
	if (this->_energyPoints > this->_maxEnergyPoints)
		this->_energyPoints = this->_maxEnergyPoints;
	this->_hitPoints += amount;
	if (this->_hitPoints > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	else if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << "Parent :: You cant keep " << this->_name << " Down";
	std::cout << " current health " << this->_hitPoints << std::endl;
}

void		ClapTrap::vaulthunter_dot_exe(std::string const & target) {
	std::string randomAttack[] = {
		"Place your bet", "Running the sequencer", "Lets get this party started",
		"Loading combat packages", "I am a robot ninja"
		};

	if (this->_energyPoints < 25) {
		std::cout << "AHHH just forget it, you attack *(running away)" << std::endl;
		return ;
	}
	std::cout << "Parent :: " << randomAttack[rand() % 5] << " ATTACK ATTACK :: ";
	if ((rand() % 2) == 0)
		this->rangedAttack(target);
	else
		this->meleeAttack(target);
	this->_energyPoints -= 25;
	if (this->_energyPoints < 0)
		this->_energyPoints = 0;
}
