/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhanye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 10:23:46 by akhanye           #+#    #+#             */
/*   Updated: 2018/06/08 16:21:17 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	Fragtrap	soldier = Fragtrap("Mouse");
	Fragtrap	brave = Fragtrap("Cat");
	Fragtrap	copyofSoldier = Fragtrap(soldier);
	Fragtrap	copyOfBrave;
	ScavTrap	scavvy = ScavTrap("Scavvy");
	ScavTrap	scavvy1 = ScavTrap(scavvy);
	ScavTrap	scavvy2;

	soldier.rangedAttack(brave.getName());
	copyOfBrave = brave;
	soldier.rangedAttack(brave.getName());
	soldier.rangedAttack(brave.getName());
	soldier.meleeAttack(brave.getName());
	brave.takeDamage(50);
	brave.takeDamage(30);
	brave.beRepaired(50);
	brave.vaulthunter_dot_exe("Mouse");
	soldier.vaulthunter_dot_exe("Dog");
	soldier.rangedAttack(brave.getName());
	scavvy2 = scavvy1;
	scavvy2.rangedAttack("Hello Attacker is here");
	scavvy1.meleeAttack("ScavChamp");
	scavvy2.challengeNewcomer("Rand Person");
}
