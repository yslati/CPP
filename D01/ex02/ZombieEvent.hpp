#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include "Zombie.hpp"

class ZombieEvent {

	public:
		ZombieEvent();
		~ZombieEvent();
		void setZombieType(std::string type);
		Zombie* newZombie(std::string name);
		Zombie* randomChump();

		std::string gettype() {
			return _type;
		}
	private:
		std::string _type;

};


#endif