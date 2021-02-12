/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 10:26:06 by yslati            #+#    #+#             */
/*   Updated: 2021/02/11 17:41:36 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"


FragTrap::FragTrap( void ) : ClapTrap()
{
	this->_name = ClapTrap::_name;
	std::cout << "\033[1;31mFRAGTRAP: Heheheeee Boooaa CLAPTRAP THE FRAGTRAP, MY NAME IS \033[0m" << "\033[0;32m"
	<< _name << "\033[0m" << std::endl;
	_hitPoints = ClapTrap::_maxHitPoints;
	_energyPoints = ClapTrap::_maxEnergyPoints;
	_level = ClapTrap::_level;
	srand(clock());
	return ;
}


FragTrap::~FragTrap( void )
{
	std::cout << "\033[1;32mIs it dead? Can, can I open my eyes now?\033[0m" << std::endl;
	return ;
}

FragTrap::FragTrap( std::string const & name ) : ClapTrap(name)
{
	this->_name = name;
	std::cout << "\033[1;32mHey Everybody! Let's get this party started my name is \033[0m"
	<< "\033[0;32m" << this->_name << "\033[0m" << std::endl;
	_hitPoints = ClapTrap::_maxHitPoints;
	_energyPoints = ClapTrap::_maxEnergyPoints;
	_level = ClapTrap::_level;
	srand(clock());
	return ;
}

FragTrap::FragTrap( FragTrap const & src ) : ClapTrap(src)
{
	std::cout << "\033[1;32mRecompiling my combat code! This time i will be awesome, I promise\033[0m"
	<< std::endl;
	*this = src;
	return ;
}

FragTrap & FragTrap::operator=( FragTrap const & src )
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_energyPoints = src._energyPoints;
		this->_hitPoints = src._hitPoints;
		this->_level = src._level;
	}
	return *this;
}

void  FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->_energyPoints >= 25)
	{
		int		r;

		srand(clock());
		this->_energyPoints -= 25;
		void	(FragTrap::*ptr[5])(std::string const &) = {
			&FragTrap::blightBotAttack,
			&FragTrap::gunWizardAttack,
			&FragTrap::lazerAttack,
			&FragTrap::torgueFiestaAttack,
			&FragTrap::oneShotWonderAttack
		};
		r = rand() % 5;
		(this->*ptr[r])(target);
	}
	else
		std::cout << "\033[1;32mFRAGTRAP: " << _name << " has not enaugh enery points\033[0m" << std::endl;
}


void	FragTrap::gunWizardAttack(std::string const & target)
{
	std::cout << "You can call me Gundalf! Avada kedavra! " << this->_name << " attacks " << 
	target << " causing 5 points of damage" << std::endl;
}


void	FragTrap::lazerAttack(std::string const & target)
{
	std::cout << "Boogie time! Everybody, dance time! Da-da-da-dun-daaa-da-da-da-dun-daaa!" << this->_name << " attacks " << 
	target << " causing 10 points of damage" << std::endl;
}

void	FragTrap::torgueFiestaAttack(std::string const & target)
{
	std::cout << "brought you a present: EXPLOSIONS! " << this->_name << " attacks " << 
	target << " causing 5 points of damage" << std::endl;
}

void	FragTrap::oneShotWonderAttack(std::string const & target)
{
	std::cout << "A whole lotta bullets in just one trigger pull! " << this->_name << " attacks " << 
	target << " causing 15 points of damage" << std::endl;
}

void	FragTrap::blightBotAttack(std::string const & target)
{
	std::cout << "Tell me I'm the prettiest! Hack the planet!, Activating good cop mode... " << this->_name << " attacks " << 
	target << " causing 10 points of damage" << std::endl;
}