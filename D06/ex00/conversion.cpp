#include "conversion.hpp"

conversion::conversion() {
}

conversion::conversion(conversion const & src) {
	*this = src;
}

conversion & conversion::operator=(conversion const & src) {
	if (this != &src)
		(void)src;
	return *this;
}

conversion::~conversion() {
}