#ifndef ISQUAD_H
# define ISQUAD_H

#include "ISpaceMarine.hpp"
#include <iostream>

class ISquad {
	private:

	public:
		virtual ~ISquad() {}
		
		virtual int getCount() const = 0;
		virtual ISpaceMarine* getUnit(int) const = 0;
		virtual int push(ISpaceMarine*) = 0;
};


#endif