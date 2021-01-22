#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include "Zombie.hpp"

class ZombieHorde {

	public:
		ZombieHorde(int N);
		~ZombieHorde();
		void setZombieType(std::string type);
		Zombie* newZombie(std::string name);

		std::string gettype() {
			return _type;
		}
	private:
		std::string _type;

};


#endif