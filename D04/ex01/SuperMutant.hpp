/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 10:28:30 by yslati            #+#    #+#             */
/*   Updated: 2021/02/22 10:48:52 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_H
#define SUPERMUTANT_H

#include "Enemy.hpp"

class SuperMutant: public Enemy{
	private:
		
	public:
		SuperMutant(void);
		SuperMutant(int hp, std::string const & type);
		SuperMutant(SuperMutant const & src);
		SuperMutant & operator=(SuperMutant const & src);
		~SuperMutant();

		void takeDamage(int damage);
		
};

#endif