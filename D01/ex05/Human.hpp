#ifndef HUMAN_H
# define HUMAN_H

#include "Brain.hpp"

class Human {
	private:
		Brain &b;
	public:
		Human();
		~Human();
		std::string identify();
		Brain getBrain() const;
};





#endif