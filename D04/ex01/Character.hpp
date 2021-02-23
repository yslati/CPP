/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 10:55:31 by yslati            #+#    #+#             */
/*   Updated: 2021/02/22 15:19:46 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character{
	private:
		std::string		_name;
		int				_ap;
		AWeapon			*_weapon;

	public:
		Character();
		Character(std::string const & name);
		Character(Character const & src);
		Character & operator=(Character const & src);
		~Character();

		void recoverAP();
		void equip(AWeapon* src);
		void attack(Enemy* src);

		std::string const &	getName() const;
		int					getAP() const;
		AWeapon				*getAWeapon() const;
};

std::ostream	&	operator<<(std::ostream & o, Character const & src);

#endif