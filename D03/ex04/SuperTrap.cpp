/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 15:11:02 by yslati            #+#    #+#             */
/*   Updated: 2021/02/11 18:11:14 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "SuperTrap.hpp"

int		SuperTrap::_maxHitPoints = FragTrap::_maxHitPoints;
int		SuperTrap::_maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
int		SuperTrap::_meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
int		SuperTrap::_rangedAttackDamage = FragTrap::_rangedAttackDamage;
int		SuperTrap::_armorDamageReduction = FragTrap::_armorDamageReduction;

SuperTrap::SuperTrap( void ) : ClapTrap(), FragTrap(), NinjaTrap() {
	this->_name = ClapTrap::_name;
	std::cout << "\033[1;31mSP4G-TP: SuperTrap is in a good mode to start Eating banana\033[0m" << std::endl;
	this->_hitPoints = FragTrap::_maxHitPoints;
	this->_energyPoints = NinjaTrap::_maxEnergyPoints;
	this->_level = 1;
	return ;
}

SuperTrap::SuperTrap( std::string const & name ) : ClapTrap(name), FragTrap(name), NinjaTrap(name) {
	this->_name = name;
	std::cout << "\033[2;31mSP4G-TP: SuperTrap is in a good mode, Let's get start the party my name is \033[0m"
	<< "\033[1;31m" << this->_name << "\033[0m" << std::endl;
	this->_hitPoints = FragTrap::_maxHitPoints;
	this->_energyPoints = NinjaTrap::_maxEnergyPoints;
	this->_level = 1;
	return ;
}

SuperTrap::~SuperTrap( void ) {
	std::cout << "\033[1;32mSP4G-TP: Am I dead? Am I in heaven?\033[0m" << std::endl;
	return ;
}

SuperTrap::SuperTrap( SuperTrap const & src ) : ClapTrap(src), FragTrap(), NinjaTrap() {
	std::cout << "\033[1;32SP4G-TP: SuperTrap Recompiling combat code!\033[0m" << std::endl;
	*this = src;
	return ;
}

SuperTrap & SuperTrap::operator=( SuperTrap const & src ) {
	if (this != &src) {
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_level = src._level;
	}
	return *this;
}
