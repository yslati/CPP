/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 12:56:06 by yslati            #+#    #+#             */
/*   Updated: 2021/03/15 10:13:04 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
# define PEON_H

#include "Victim.hpp"

class Peon: public Victim {
	private:
		
	public:
		Peon(void);
		Peon(std::string name);
		Peon(Peon const & src);
		Peon & operator=(Peon const & src);
		~Peon();

		virtual void getPolymorphed() const;
};


#endif
