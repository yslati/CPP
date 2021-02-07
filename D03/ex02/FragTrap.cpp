/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:49:15 by yslati            #+#    #+#             */
/*   Updated: 2021/02/06 12:22:33 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		FragTrap::_MaxHitPoints = 100;
int		FragTrap::_MaxEnergyPoints = 100;
int		FragTrap::_MeleeAttackDamage = 30;
int		FragTrap::_RangedAttackDamage = 20;
int		FragTrap::_ArmorDamageReduction = 5;

FragTrap::FragTrap() : ClapTrap(){
	_Level = 1;
	_HitPoints = _MaxHitPoints;
	_EnergyPoints = _MaxEnergyPoints;
	_name = "anonymous";
	std::cout << CYAN << "FR4G-TP " << "Claptrap -- start bootup sequence." << NC << std::endl;
	return;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	_name = name;
	_Level = 1;
	_HitPoints = _MaxHitPoints;
	_EnergyPoints = _MaxEnergyPoints;
	std::cout << CYAN << "FR4G-TP " << _name << " Enter The Fight !!" << NC << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const & src): ClapTrap(src) {
	std::cout << "FR4G-TP " << "Look out everybody! Things are about to get awesome!" << std::endl;
	return;
}

FragTrap & FragTrap::operator=(FragTrap const & src) {
	_Level = src._Level;
	_HitPoints = src._MaxHitPoints;
	_EnergyPoints = src._MaxEnergyPoints;
	std::cout << "FR4G-TP " << src._name << " is giving the Power to " << _name << std::endl;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << RED << "FR4G-TP " << _name << " dead !!" << NC << std::endl;
	return;
}

void		FragTrap::Funzerker(std::string const & target) {
	std::cout << ORANGE << "FR4G-TP " << _name << " Attacks " << target << " : I'm a sexy dinosaur! Rawr!" << NC << std::endl;
}
void		FragTrap::MeatUnicycle(std::string const & target) {
	std::cout << ORANGE << "FR4G-TP " << _name << " Attacks " << target << " : I AM ON FIRE!!! OH GOD, PUT ME OUT!!!" << NC << std::endl;
}
void		FragTrap::Blightbot(std::string const & target) {
	std::cout << ORANGE << "FR4G-TP " << _name << " Attacks " << target << " : Aww, I should've drawn tattoos on you!" << NC << std::endl;
}
void		FragTrap::Mechromagician(std::string const & target) {
	std::cout << ORANGE << "FR4G-TP " << _name << " Attacks " << target << " : Anarchy and mini-trap and awesomeness, oh my!" << NC << std::endl;
}
void		FragTrap::Miniontrap(std::string const & target) {
	std::cout << ORANGE << "FR4G-TP " << _name << " Attacks " << target << " : Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew!" << NC << std::endl;
}

void		FragTrap::vaulthunter_dot_exe(std::string const & target) {

	srand(clock());
	std::cout << YELLOW << "FR4G-TP " << "Hey everybody, check out my package!" << NC << std::endl;
	typedef void (FragTrap::*Weapons)(std::string const & target);
	Weapons weapons[5] = {&FragTrap::Funzerker, &FragTrap::MeatUnicycle, &FragTrap::Blightbot, &FragTrap::Mechromagician, &FragTrap::Miniontrap};
	if (_EnergyPoints >= 25) {
		(this->*(weapons[rand() % 5]))(target);
	}
	else {
		std::cout << L_GREEN << "FR4G-TP " << _name << " Oh, I havn't enough energy!" << NC << std::endl;
	}
}