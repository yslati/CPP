/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 11:56:07 by yslati            #+#    #+#             */
/*   Updated: 2021/02/20 12:49:34 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
#define AWEAPON_H

#include <iostream>

class AWeapon {
	private:
		std::string		_name;
		int				_apcost;
		int				_damage;
		
	public:
		AWeapon(void);
		AWeapon(AWeapon const & src);
		AWeapon &operator=(AWeapon const & src);
		AWeapon(std::string const & name, int apcost, int damage);
		virtual ~AWeapon();
		
		std::string const & getName() const {
			return _name;
		}
		int getAPCost() const {
			return _apcost;
		}
		int getDamage() const {
			return _damage;
		}
		virtual void attack() const = 0;
};

#endif