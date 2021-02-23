#ifndef Cure_H
# define Cure_H

#include "AMateria.hpp"

class Cure: public AMateria {
	private:
		unsigned int	_xp;
		std::string		_type;
		
	public:
		Cure();
		Cure(Cure const & src);
		Cure & operator=(Cure const & src);
		virtual ~Cure();

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif