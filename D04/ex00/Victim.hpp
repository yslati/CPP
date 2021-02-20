/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 12:29:57 by yslati            #+#    #+#             */
/*   Updated: 2021/02/20 11:03:13 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
#define VICTIM_H

#include <iostream>
#include <ostream>

class Victim {
	protected:
		std::string		_name;

	public:
		Victim(void);
		Victim(std::string name);
		Victim(Victim const & src);
		Victim & operator=(Victim const & src);		
		virtual ~Victim();

		virtual void getPolymorphed() const;

		std::string getName() const {
			return _name;
		}
};

std::ostream & operator<<(std::ostream &o, Victim const &src);


#endif // !VICTIM_H