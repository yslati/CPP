/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 10:25:29 by yslati            #+#    #+#             */
/*   Updated: 2021/02/11 18:12:28 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include <iostream>

class ScavTrap {
	public:
		ScavTrap( void );
		ScavTrap( std::string const & name );
		ScavTrap( ScavTrap const & src );
		ScavTrap & operator=( ScavTrap const & src );
		~ScavTrap( void );
		
		void		rangedAttack(std::string const & target) const;
		void		meleeAttack(std::string const & target) const;
		void		takeDamage(unsigned int amount);
		void		challengeNewcomer( void );
		void		beRepaired(unsigned int amount);
		int			getPoints( void ) const;

	private:
		std::string	_name;
		int			_hitPoints;
		static int	_maxHitPoints;
		int 		_energyPoints;
		static int	_maxEnergyPoints;
		int 		_level;
		static int	_meleeAttackDamage;
		static int	_rangedAttackDamage;
		static int	_armorDamageReduction;
};

#endif