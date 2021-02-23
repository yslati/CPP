#include "AMateria.hpp"

AMateria::AMateria() {
	_xp  = 0;
	_type = "";
	return ;
}

AMateria::AMateria(std::string const & type) {
	_xp = 0;
	_type = type;
	return ;
}

AMateria::AMateria(AMateria const & src) {
	*this = src;
	return ;
}

AMateria &		AMateria::operator=(AMateria const & src) {
	_xp = src.getXP();
	_type = src.getType();

	return *this;
}

AMateria::~AMateria() {
	return ;
}

std::string const & AMateria::getType() const {
	return _type;
}

unsigned int AMateria::getXP() const {
	return _xp;
}

void AMateria::use(ICharacter& target) {
	_xp += 10;
	(void)target;
}