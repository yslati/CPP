/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 10:26:20 by yslati            #+#    #+#             */
/*   Updated: 2021/02/14 12:57:57 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

/*
• Hit points (100)
• Max hit points (100)
• Energy points (50)
• Max energy points (50)
• Level (1)
• Name (Parameter of constructor)
• Melee attack damage (20)
• Ranged attack damage (15)
• Armor damage reduction (3)
*/

ScavTrap::ScavTrap( void ) : ClapTrap() {
	std::cout << "\033[1;32mScavTrap: Hey hey check me out everyBody my name is "
	<< this->_name << "\033[0m" << std::endl;
	
	_maxHitPoints = 100;
	_maxEnergyPoints = 50;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;

	srand(clock());
	return ;
}

ScavTrap::ScavTrap( std::string const & name ) : ClapTrap(name) {
	
	_maxHitPoints = 100;
	_maxEnergyPoints = 50;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	
	std::cout << "\033[2;32mScavTrap: Yoooohooo, unce!, !unce, I think I lost the beat but unce!, my name is " 
	<< this->_name << "\033[0m" << std::endl;
	
	srand(clock());
	return ;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "\033[1;32mScavTrap: Am I dead or not, Can I open my eyes?\033[0m" << std::endl;
	return ;
}

ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap(src)
{
	std::cout << "\033[1;32ScavTrap: Recompiling my combat code! my name is \033[0m"
	<< "\033[0;32m" << this->_name << "\033[0m" << std::endl;
	*this = src;
	return ;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & src )
{
	if (this != &src) {
		this->_name = src._name;
		this->_energyPoints = src._energyPoints;
		this->_hitPoints = src._hitPoints;
		this->_level = src._level;
	}
	return *this;
}


void	ScavTrap::challengeNewcomer( void )
{
	std::string		challenge[5] = {
		"\033[1;31mI am a tornado of death and bullets!\033[0m",
		"\033[1;31mAww! Now I want a snow cone\033[0m",
		"\033[1;31mFreeze, in the reference of emotion!\033[0m",
		"\033[1;31mFly mini-trap! Fly!\033[0m",
		"\033[1;31mTrouncy, flouncy... founcy... those aren't words\033[0m"
	};
	int		r = rand() % 5;
	std::cout << "Challenge: " << std::endl;
	std::cout << challenge[r] << std::endl;
	return ;
}