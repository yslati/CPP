/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 18:26:11 by yslati            #+#    #+#             */
/*   Updated: 2021/02/06 11:52:33 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>


/* 
	Black        0;30     Dark Gray     1;30
	Red          0;31     Light Red     1;31
	Green        0;32     Light Green   1;32
	Brown/Orange 0;33     Yellow        1;33
	Blue         0;34     Light Blue    1;34
	Purple       0;35     Light Purple  1;35
	Cyan         0;36     Light Cyan    1;36
	Light Gray   0;37     White         1;37
*/

const std::string  RED		= "\033[0;31m";
const std::string  L_RED	= "\033[1;31m";
const std::string  GREEN	= "\033[0;32m";
const std::string  L_GREEN	= "\033[1;32m";
const std::string  ORANGE	=  "\033[0;33m";
const std::string  YELLOW	=  "\033[1;33m";
const std::string  BLUE		= "\033[0;34m";
const std::string  CYAN		= "\033[0;36m";
const std::string  NC		= "\033[0m";

class ClapTrap
{
	protected:
		int				_HitPoints;
		static int		_MaxHitPoints;
		int				_EnergyPoints;
		static int		_MaxEnergyPoints;
		int				_Level;
		std::string		_name;
		
		static int		_MeleeAttackDamage;
		static int		_RangedAttackDamage;
		static int		_ArmorDamageReduction;

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		ClapTrap & operator=(ClapTrap const & src);
		~ClapTrap(void);

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};




#endif