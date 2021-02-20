/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 12:35:52 by yslati            #+#    #+#             */
/*   Updated: 2021/02/20 12:51:01 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>

class Enemy{
	private:
        int				_hp;
        std::string		_type;
		
	public:
		Enemy(void);
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const & src);
		Enemy & operator=(Enemy const & src);
		virtual ~Enemy();

		std::string const & getType() const {
			return _type;
		}
		int		getHP() const {
			return _hp;
		}

		virtual void takeDamage(int damage);
};

#endif