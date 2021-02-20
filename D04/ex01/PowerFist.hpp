/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 12:26:58 by yslati            #+#    #+#             */
/*   Updated: 2021/02/20 12:28:44 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_H
#define POWERFIST_H

#include "AWeapon.hpp"

class PowerFist: public AWeapon {
	private:
		
	public:
		PowerFist(void);
		PowerFist(PowerFist const & src);
		PowerFist & operator=(PowerFist const & src);
		PowerFist(std::string const & name, int apcost, int damage);
		~PowerFist();

		virtual void attack() const {
			std::cout << "* pschhh... SBAM! *" << std::endl;
		}
};


#endif