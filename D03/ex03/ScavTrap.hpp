/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:52:40 by yslati            #+#    #+#             */
/*   Updated: 2021/02/06 12:33:57 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	private:
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
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		ScavTrap & operator=(ScavTrap const & src);
		~ScavTrap();

		void	challengeNewcomer();
};

#endif