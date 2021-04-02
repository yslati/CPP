#include "conversion.hpp"

conversion::conversion() {
}

std::string		conversion::parse_float(std::string arg) {

	size_t pos = arg.find(".");
	if (pos == std::string::npos)
		return arg;
	std::string str = arg.substr((int)pos + 1, arg.length());
	if (str[str.length() - 1] == 'f')
		str = str.substr(0, str.length() - 1);
	this->flt = str;
	for (size_t i = 0; i < str.length(); i++)
		if (str[i] > '9' || str[i] < '0' || str[i] == '.')
			return "";
	return (arg.substr(0, (int)pos + 1));
}

int			conversion::check_char(std::string str) {
	if (str[0] == '+')
		str = str.substr(1, str.length());
	if (str[str.length() - 1] == '.' || (str[str.length() - 1] == 'f' && (str[str.length() - 2] >= '0' && str[str.length() - 2] <= '9')))
		str = str.substr(0, str.length() - 1);
	for (size_t i = 0; i < str.length(); i++)
		if (str[0] == '0')
			str = str.substr(1, str.length());
	double val = atof(str.c_str());
	std::stringstream ss;
	ss << val;
	this->first = str;
	if (str.length() == 1 && std::isprint(str[0]) && (str[0] > '9' || str[0] < '0'))
		return 0;
	else if (str.length() > 1 && (!val || (ss.str()).length() != str.length())) {
		
		return (1);
	}
	return 0;
}

conversion::conversion(std::string arg) {
	this->flt = "";
	std::string str = parse_float(arg);
	if (str == "" || check_char(str)) {
		throw InvalidInput();
	}
	else {
		std::cout << "your 7zi9a: " << first;
		if (this->flt != "") {
			std::cout << "." << flt << std::endl;
		}
		else
			std::cout << std::endl;
	}
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


const char* conversion::InvalidInput::what() const throw() {
	return "I Can't Convert this!";
}