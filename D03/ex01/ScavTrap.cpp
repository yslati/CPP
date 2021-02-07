/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:52:38 by yslati            #+#    #+#             */
/*   Updated: 2021/02/05 18:20:27 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int		ScavTrap::_MaxHitPoints = 100;
int		ScavTrap::_MaxEnergyPoints = 50;
int		ScavTrap::_MeleeAttackDamage = 20;
int		ScavTrap::_RangedAttackDamage = 15;
int		ScavTrap::_ArmorDamageReduction = 3;


ScavTrap::ScavTrap(void) {
	_Level = 1;
	_HitPoints = _MaxHitPoints;
	_EnergyPoints = _MaxEnergyPoints;
	_name = "anonymous";
	std::cout << CYAN << "FR4G-TP " << _name << ": Ah, man, I am so late!" << NC << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) {
	_Level = 1;
	_HitPoints = _MaxHitPoints;
	_EnergyPoints = _MaxEnergyPoints;
	_name = name;
	std::cout << CYAN << "FR4G-TP " << _name << ": Let's get this party started!" << NC << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const & src) {
	*this = src;
	std::cout << CYAN << "FR4G-TP " << src._name << ": Look out everybody! Things are about to get awesome!" << NC << std::endl;
	return;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & src) {
	_Level = src._Level;
	_HitPoints = src._HitPoints;
	_EnergyPoints = src._EnergyPoints;
	std::cout << "FR4G-TP " << src._name << " is giving Ammo to " << _name << std::endl;
	return *this;
}

ScavTrap::~ScavTrap(void) {
	std::cout << RED << "FR4G-TP " << _name << " I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << NC << std::endl;
	return;
}

void		ScavTrap::rangedAttack(std::string const & target) {
	std::cout << BLUE << "FR4G-TP " << _name << " attacks " << target << " | One down, any other takers?" << NC << std::endl;
}
void		ScavTrap::meleeAttack(std::string const & target) {
	std::cout << BLUE << "FR4G-TP " << _name << " Take that! | " << target << " causing " << _MeleeAttackDamage << " points of damage!, HAHAHA" << NC << std::endl;
}

void		ScavTrap::takeDamage(unsigned int amount) {

	if (_HitPoints + _ArmorDamageReduction - amount <= 0) {
		_HitPoints = 0;
		std::cout << RED << "FR4G-TP " << _name << ": I am Fire, I am Death!" << NC << std::endl;
	}
	else {
		_HitPoints = _HitPoints + _ArmorDamageReduction - amount;
		std::cout << L_RED << "FR4G-TP " << _name << ": My assets... frozen! | current Hit Point: " << _HitPoints << NC << std::endl;
	}
}
void		ScavTrap::beRepaired(unsigned int amount) {

	if (_HitPoints + amount <= 100) {
		_HitPoints += amount;
		std::cout << GREEN << "FR4G-TP " << _name << ": Take these, gorgeous, you'll feel better!" << NC << std::endl;
	}
	else {
		std::cout << L_GREEN << "FR4G-TP " << _name << ": a lot of power, Oh i can't !!" << NC << std::endl;
	}
}

void		ScavTrap::challengeNewcomer() {

	srand(clock());
	std::string attacks[5] = {
		": You versus me! Me versus you! Either way!",
		": I will prove to you my robotic superiority!",
		": Dance battle! Or, you know... regular battle.",
		": Man versus machine! Very tiny streamlined machine!",
		": Care to have a friendly duel?",
	};
	std::cout << YELLOW << "FR4G-TP " << _name << attacks[rand() % 5] << NC << std::endl;
}
