#ifndef HUMAN_H
# define HUMAN_H

#include <iostream>
#include <stdlib.h>
#include <ctime>

class Human {
	private:
		void meleeAttack(std::string const & target) {
			std::cout << "meleeAttack called. Target is " << target << std::endl;
		}
		void rangedAttack(std::string const & target) {
			std::cout << "rangedAttack called. target is " << target << std::endl;
		}
		void intimidatingShout(std::string const & target) {
			std::cout << "intimidatingShout Called. target is " << target << std::endl;
		}

	public:
		void action(std::string const & action_name, std::string const & target);
};

#endif