/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 15:11:07 by yslati            #+#    #+#             */
/*   Updated: 2021/02/11 18:10:53 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_TRAP_HPP
# define SUPER_TRAP_HPP

# include "FragTrap.hpp"
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
	public:
		SuperTrap( void );
		SuperTrap( std::string const & name );
		SuperTrap( SuperTrap const & src );
		SuperTrap & operator=( SuperTrap const & src );
		~SuperTrap( void );

		std::string	getname() const {
			return _name;
		}
		
	private:
		std::string		_name;
		int				_hitPoints;
		static int		_maxHitPoints;
		int				_energyPoints;
		static int		_maxEnergyPoints;
		int				_level;
		static int		_meleeAttackDamage;
		static int		_rangedAttackDamage;
		static int		_armorDamageReduction;
};

#endif
