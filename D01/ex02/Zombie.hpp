#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <iomanip>

class Zombie {

	public:
		Zombie(std::string name, std::string type): _name(name), _type(type) {
			std::cout << "Zombie " << _name << " is born\n";
		}
		~Zombie();
		void announce();

	private:
		std::string _name;
		std::string _type;

};

#endif