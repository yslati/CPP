/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 10:25:14 by yslati            #+#    #+#             */
/*   Updated: 2021/02/11 18:12:18 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <iostream>

class FragTrap {
	public:
		FragTrap(std::string const & name);
		FragTrap( void );
		FragTrap( FragTrap const & src );
		FragTrap & operator=( FragTrap const & src );
		~FragTrap( void );

		void		rangedAttack(std::string const & target) const;
		void		meleeAttack(std::string const & target) const;
		void		takeDamage(unsigned int amount);
		void		vaulthunter_dot_exe(std::string const & target);
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

		// random function so that we can use them with vaulthunter_dot_exe
		void		blightBotAttack(std::string const & target);
		void		gunWizardAttack(std::string const & target);
		void		lazerAttack(std::string const & target);
		void		torgueFiestaAttack(std::string const & target);
		void		oneShotWonderAttack(std::string const & target);
};

#endif