/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 10:49:28 by yslati            #+#    #+#             */
/*   Updated: 2021/02/22 12:17:32 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_H
#define RADSCORPION_H

#include "Enemy.hpp"

class RadScorpion: public Enemy{
	private:

	public:
		RadScorpion(void);
		RadScorpion(int hp, std::string const & type);
		RadScorpion(RadScorpion const & src);
		RadScorpion & operator=(RadScorpion const & src);
		~RadScorpion();	
};

#endif