/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 12:06:12 by yslati            #+#    #+#             */
/*   Updated: 2021/02/22 12:12:50 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_H
#define PLASMARIFLE_H

#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon {
	private:
		
	public:
		PlasmaRifle(void);
		PlasmaRifle(PlasmaRifle const & src);
		PlasmaRifle & operator=(PlasmaRifle const & src);
		PlasmaRifle(std::string const & name, int apcost, int damage);
		~PlasmaRifle();

		void attack() const;
};



#endif