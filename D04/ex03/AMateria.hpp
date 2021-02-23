#ifndef AMATERIA_H
# define AMATERIA_H

#include "ICharacter.hpp"
class AMateria;

class AMateria {
	private:
		unsigned int	_xp;
		std::string		_type;
		
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria const & src);
		AMateria & operator=(AMateria const & src);
		virtual ~AMateria();

		std::string const & getType() const;
		unsigned int getXP() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};


#endif