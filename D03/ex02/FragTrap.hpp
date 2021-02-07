/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:49:12 by yslati            #+#    #+#             */
/*   Updated: 2021/02/06 12:15:33 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap:  public ClapTrap{
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

		void	Funzerker(std::string const & target);
		void	MeatUnicycle(std::string const & target);
		void	Blightbot(std::string const & target);
		void	Mechromagician(std::string const & target);
		void	Miniontrap(std::string const & target);

	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		FragTrap & operator=(FragTrap const & src);
		~FragTrap(void);

		void	vaulthunter_dot_exe(std::string const & target);
};

#endif
