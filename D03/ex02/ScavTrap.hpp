/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 10:26:26 by yslati            #+#    #+#             */
/*   Updated: 2021/02/11 18:13:11 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	public:
		ScavTrap( std::string const & name );
		ScavTrap( void );
		ScavTrap( ScavTrap const & src );
		ScavTrap & operator=( ScavTrap const & src );
		~ScavTrap( void );

		void		challengeNewcomer( void );

	private:

};

#endif