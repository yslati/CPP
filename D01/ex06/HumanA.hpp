#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class HumanA {
	private:
		std::string _name;
		Weapon& _w;

	public:
		HumanA(std::string name, Weapon& w);
		~HumanA();
		void attack();
};

#endif