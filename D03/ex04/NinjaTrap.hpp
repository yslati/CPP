/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 15:10:42 by yslati            #+#    #+#             */
/*   Updated: 2021/02/11 18:09:36 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP_HPP
# define NINJA_TRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : virtual public ClapTrap {
	public:
		NinjaTrap( void );
		NinjaTrap( std::string const & name );
		NinjaTrap( NinjaTrap const & src );
		NinjaTrap & operator=( NinjaTrap const & src );		
		~NinjaTrap( void );
		void		ninjaShoeBox(NinjaTrap const & ninja);
		void		ninjaShoeBox(ClapTrap const & clap);
		void		ninjaShoeBox(FragTrap const & frag);
		void		ninjaShoeBox(ScavTrap const & scav);

		std::string	getname() const {
			return _name;
		}
		
	private:
};

#endif
