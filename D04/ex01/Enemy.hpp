/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 12:35:52 by yslati            #+#    #+#             */
/*   Updated: 2021/02/22 15:21:48 by yslati           ###   ########.fr       */
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

		std::string const &	getType() const;
		int					getHP() const;
		void				setHP(int hp);

		virtual void takeDamage(int damage);
};

#endif