/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 10:26:00 by yslati            #+#    #+#             */
/*   Updated: 2021/02/11 18:12:39 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <iostream>

class ClapTrap {
	public:
		ClapTrap( void );
		ClapTrap( std::string const & name );
		ClapTrap( ClapTrap const & src );
		ClapTrap & operator=( ClapTrap const & src );
		~ClapTrap( void );
		
		void		rangedAttack(std::string const & target) const;
		void		meleeAttack(std::string const & target) const;
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

	protected:
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