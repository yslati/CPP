#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class HumanB {
	private:
		std::string _name;
		Weapon* _w;

	public:
		HumanB(std::string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon& w);
};

#endif