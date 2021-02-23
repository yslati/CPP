/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 11:52:46 by yslati            #+#    #+#             */
/*   Updated: 2021/02/22 15:08:52 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
#define SORCERER_H

#include "Victim.hpp"

class Sorcerer {
	private:
		std::string		_name;
		std::string		_title;


	public:
		Sorcerer(void);
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const & src);
		Sorcerer & operator=(Sorcerer const & src);
		~Sorcerer();

		void polymorph(Victim const &) const;

		std::string getName() const;
		std::string getTitle() const;
};

std::ostream &	operator<<(std::ostream & o, Sorcerer const src);


#endif