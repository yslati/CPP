#ifndef TACTICALMARINE_H
# define TACTICALMARINE_H

#include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine {
	public:
		TacticalMarine();
		TacticalMarine(TacticalMarine const & src);
		TacticalMarine & operator=(TacticalMarine const & src);
		~TacticalMarine();

		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
		ISpaceMarine* clone() const;
};


#endif