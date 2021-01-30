/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 11:52:55 by yslati            #+#    #+#             */
/*   Updated: 2021/01/30 11:52:56 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {

	private:
		int _fpnt;
		static const int _fbits;
	
	public:
		Fixed();
		Fixed(Fixed const & fix); // copy constractor

		Fixed & operator=(Fixed const & fix);

		int getRawBits() const;

		~Fixed();
};

std::ostream & operator<<(std::ostream & o, Fixed const & f);

#endif
