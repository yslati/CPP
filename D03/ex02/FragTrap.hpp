/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 10:26:11 by yslati            #+#    #+#             */
/*   Updated: 2021/02/14 12:51:44 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
	public:
		FragTrap(std::string const & name);
		FragTrap( void );
		FragTrap( FragTrap const & src );
		FragTrap & operator=( FragTrap const & src );
		~FragTrap( void );

		void		vaulthunter_dot_exe(std::string const & target);

	private:
	
		void		blightBotAttack(std::string const & target);
		void		gunWizardAttack(std::string const & target);
		void		lazerAttack(std::string const & target);
		void		torgueFiestaAttack(std::string const & target);
		void		oneShotWonderAttack(std::string const & target);
};

#endif