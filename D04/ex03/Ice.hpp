#ifndef ICE_H
# define ICE_H

#include "AMateria.hpp"

class Ice: public AMateria {
	private:
		unsigned int	_xp;
		std::string		_type;
		
	public:
		Ice();
		Ice(Ice const & src);
		Ice & operator=(Ice const & src);
		virtual ~Ice();

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif