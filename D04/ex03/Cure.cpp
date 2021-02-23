#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	return;
}

Cure::Cure(Cure const &cpy) {
	*this = cpy;
}

Cure&	Cure::operator=(Cure const &rhs) {
	this->_xp = rhs.getXP();
	this->_type = rhs.getType();
	return *this;
}

Cure::~Cure() {
	return;
}

AMateria*	Cure::clone() const {
	AMateria *i = new Cure(*this);
	return i;
}

void		Cure::use(ICharacter& target) {
	AMateria::use(target);
	std::cout << "* shoots an Cure bolt at " << target.getName() << " *" << std::endl;
}