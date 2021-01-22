#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <iomanip>

class Zombie {

	public:
		Zombie(std::string name, std::string type);
		~Zombie();
		void announce();

	private:
		std::string _name;
		std::string _type;

};

#endif