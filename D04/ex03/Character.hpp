#ifndef CHARACTER_H
# define CHARACTER_H

#include "ICharacter.hpp"

class Character : public ICharacter {
	private:
		std::string		_name;
		int				_total;
		AMateria		*_materias[4];

	public:
		Character();
		Character(std::string name);
		Character(Character const &src);
		Character&		operator=(Character const &src);
		~Character();

		std::string const & getName() const;

		void			equip(AMateria* m);
		void			unequip(int idx);
		void			use(int idx, ICharacter& target);
};

#endif