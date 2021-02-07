/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:52:40 by yslati            #+#    #+#             */
/*   Updated: 2021/02/05 18:22:02 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "FragTrap.hpp"

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

class ScavTrap
{
	private:
		int			_HitPoints;
		static int	_MaxHitPoints;
		int			_EnergyPoints;
		static int	_MaxEnergyPoints;
		int			_Level;
		std::string	_name;

		static int	_MeleeAttackDamage;
		static int	_RangedAttackDamage;
		static int	_ArmorDamageReduction;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		ScavTrap & operator=(ScavTrap const & src);
		~ScavTrap();

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	challengeNewcomer();
};



#endif