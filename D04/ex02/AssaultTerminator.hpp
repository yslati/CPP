#ifndef ASSAULTTERMINATOR_H
# define ASSAULTTERMINATOR_H

#include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine {
	private:

	public:
		AssaultTerminator();
		AssaultTerminator(AssaultTerminator const & src);
		// AssaultTerminator & operator=(AssaultTerminator const & src);
		~AssaultTerminator();

		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
		ISpaceMarine* clone() const;
};

#endif