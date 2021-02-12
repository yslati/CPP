/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 15:10:17 by yslati            #+#    #+#             */
/*   Updated: 2021/02/11 17:58:34 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
	public:
		FragTrap(std::string const & name);
		FragTrap( void );
		FragTrap( FragTrap const & src );
		FragTrap & operator=( FragTrap const & src );
		~FragTrap( void );

		void		vaulthunter_dot_exe(std::string const & target);

		std::string	getname() const {
			return _name;
		}
		
	private:
		void		blightBotAttack(std::string const & target);
		void		gunWizardAttack(std::string const & target);
		void		lazerAttack(std::string const & target);
		void		torgueFiestaAttack(std::string const & target);
		void		oneShotWonderAttack(std::string const & target);
};

#endif
