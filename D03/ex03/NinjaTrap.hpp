/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 10:27:10 by yslati            #+#    #+#             */
/*   Updated: 2021/02/11 17:42:54 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef NINJA_TRAP_HPP
# define NINJA_TRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : public ClapTrap {
	public:
		NinjaTrap( void );
		NinjaTrap( std::string const & name );
		NinjaTrap( NinjaTrap const & src );
		NinjaTrap & operator=( NinjaTrap const & src );		
		~NinjaTrap( void );
		void	ninjaShoeBox(NinjaTrap const & ninja);
		void	ninjaShoeBox(ClapTrap const & clap);
		void	ninjaShoeBox(FragTrap const & frag);
		void	ninjaShoeBox(ScavTrap const & scav);
	private:
		std::string		_name;
		int				_hitPoints;
		int				_energyPoints;
		int				_level;
};

#endif