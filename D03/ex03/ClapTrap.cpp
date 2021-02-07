/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 18:27:34 by yslati            #+#    #+#             */
/*   Updated: 2021/02/06 12:33:42 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		ClapTrap::_MaxHitPoints = 100;
int		ClapTrap::_MaxEnergyPoints = 50;
int		ClapTrap::_MeleeAttackDamage = 20;
int		ClapTrap::_RangedAttackDamage = 15;
int		ClapTrap::_ArmorDamageReduction = 3;

ClapTrap::ClapTrap(void) {
	_Level = 1;
	_HitPoints = _MaxHitPoints;
	_EnergyPoints = _MaxEnergyPoints;
	_name = "anonymous";
	std::cout << CYAN << "FR4G-TP " << _name << ": Here we go again!" << NC << std::endl;
	return ;
}
ClapTrap::ClapTrap(std::string name) {
	_Level = 1;
	_HitPoints = _MaxHitPoints;
	_EnergyPoints = _MaxEnergyPoints;
	_name = name;
	std::cout << CYAN << "FR4G-TP " << _name << ": Recompiling my combat code!" << NC << std::endl;
	return ;
}
ClapTrap::ClapTrap(ClapTrap const & src) {
	*this = src;
	_name = src._name;
	std::cout << CYAN << "FR4G-TP " << src._name << ": Yo EveryBody we are here again!!" << NC << std::endl;
	return ;
}
ClapTrap & ClapTrap::operator=(ClapTrap const & src) {
	_Level = src._Level;
	_HitPoints = src._HitPoints;
	_EnergyPoints = src._EnergyPoints;
	std::cout << "FR4G-TP " << src._name << " RUN FOR YOUR LIIIIIVES!!! " << _name << std::endl;
	return *this;
}
ClapTrap::~ClapTrap(void) {
	std::cout << RED << "FR4G-TP " << _name << " I'M DEAD!!!!!!" << NC << std::endl;
	return;
}

void		ClapTrap::rangedAttack(std::string const & target) {
	std::cout << BLUE << "FR4G-TP " << _name << " attacks " << target << " | One down, any other takers?" << NC << std::endl;
}
void		ClapTrap::meleeAttack(std::string const & target) {
	std::cout << BLUE << "FR4G-TP " << _name << " Take that! | " << target << " causing " << _MeleeAttackDamage << " points of damage!, HAHAHA" << NC << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount) {

	if ((_HitPoints + _ArmorDamageReduction - amount) <= 0) {
		_HitPoints = 0;
		std::cout << RED << "FR4G-TP " << _name << ": Argh arghargh death gurgle gurglegurgle urgh... death." << NC << std::endl;
	}
	else {
		_HitPoints = _HitPoints + _ArmorDamageReduction - amount;
		if (_HitPoints < 0)
			_HitPoints = 0;
		std::cout << L_RED << "FR4G-TP " << _name << ": I can't feel my fingers! Gah! I don't have any fingers! | current Hit Point: " << _HitPoints << NC << std::endl;
	}
}
void		ClapTrap::beRepaired(unsigned int amount) {

	if (_HitPoints + amount <= 100) {
		_HitPoints += amount;
		std::cout << GREEN << "FR4G-TP " << _name << ": Health! Eww, what flavor is red?" << NC << std::endl;
	}
	else {
		std::cout << L_GREEN << "FR4G-TP " << _name << ": Oh i can't handle all this power !!" << NC << std::endl;
	}
}