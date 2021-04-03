#include "conversion.hpp"

conversion::conversion() {
}

bool        conversion::_isScientific(std::string data) {
    std::string science[8] = {"nan", "nanf", "inf", "inff", "+inf", "-inf", "+inff", "-inff"};
    for (size_t i = 0; i < 8; i++) {
        if (data == science[i])
            return true;
    }
    return false;
}

std::string		conversion::_parse_float(std::string arg) {

	size_t pos = arg.find(".");
	if (pos == std::string::npos)
		return arg;
	std::string str = arg.substr((int)pos + 1, arg.length());
	if (str[str.length() - 1] == 'f')
		str = str.substr(0, str.length() - 1);
	this->_flt = str;
	for (size_t i = 0; i < str.length(); i++)
		if (str[i] > '9' || str[i] < '0' || str[i] == '.')
			return "";
	return (arg.substr(0, (int)pos + 1));
}

int			conversion::_check_char(std::string str) {
	if (str[0] == '+')
		str = str.substr(1, str.length());
	size_t len = str.length();
	if (str[len - 1] == '.' || (str[len - 1] == 'f' && (str[len - 2] >= '0' && str[len - 2] <= '9')))
		str = str.substr(0, len - 1);
	len = str.length();
	size_t i = -1;
	while (++i < len) {
		if (str[i] > '9' && str[i] < 0 && len > 1)
			return 1;
		if (str[0] == '0') {
			str = str.substr(1, str.length());
			i = -1;
		}
	}
	double val = atof(str.c_str());
	std::stringstream ss;
	ss << val;
	this->_first = str;
	if ((str.length() == 1 && std::isprint(str[0]) && (str[0] > '9' || str[0] < '0')) || str.length() > 6)
		return 0;
	else if ((str.length() > 1 && (!val || (ss.str()).length() != str.length())) && _isScientific(str) == false)
		return (1);
	return 0;
}

void		conversion::_printdata(std::string arg) {
	if (arg.length() == 1 && !isnumber(arg[0])) {
		int ch = static_cast<int>(arg[0]);
		if (ch < 33 || ch > 126)
			std::cout << "char: Non Displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(ch) << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(ch) << std::endl;
		std::cout << "float: " << static_cast<float>(ch) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(ch) << ".0" << std::endl;
	}
	else {
		double data = atof(arg.c_str());
		if (data < 0 || data > 127 || _isScientific(arg) == true)
			std::cout << "char: Impossible" << std::endl;
		if (_isScientific(arg) == true || static_cast<double>(data) > std::numeric_limits<int>::max() || static_cast<double>(data) < std:: numeric_limits<int>::min()) {
			std::cout << "int: Impossible" << std::endl;
			std::cout << std::setprecision(arg.length());
			std::cout << "float: " << static_cast<float>(data) << "f" << std::endl;
			std::cout << "double: " << static_cast<double>(data) << std::endl;
			return ;
		}
		else {
			if (data < 33 || data > 126)
				std::cout << "char: Non Displayable" << std::endl;
			else
				std::cout << "char: '" << static_cast<char>(data) << "'" << std::endl;
		}
		std::cout << "int: " << static_cast<int>(data) << std::endl;
		if (this->_flt != "") {
			std::cout << std::setprecision(arg.length());
			std::cout << "float: " << static_cast<float>(data) << "." << this->_flt << "f" << std::endl;
			std::cout << "double: " << static_cast<double>(data) << "." << this->_flt << std::endl;
		}
		else {
			std::cout << std::setprecision(arg.length());
			std::cout << "float: " << static_cast<float>(data) << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(data) << ".0" << std::endl;
		}
	}
}

conversion::conversion(std::string arg) {
	this->_flt = "";
	std::string str = _parse_float(arg);
	if (str == "" || _check_char(str))
		throw InvalidInput();
	else
		_printdata(_first);
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