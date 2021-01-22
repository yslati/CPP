#include "PhoneBook.hpp"

book::book() {
	return ;
}

void intro() {
	std::cout << "--------------------------------------------------" << std::endl;
	std::cout << "|"  << std::setw(30) << "CommandLine :" << std::setw(20) << "|\n";
	std::cout << "|"  << std::setw(26) << "1. ADD" << std::setw(24) << "|\n";
	std::cout << "|"  << std::setw(29) << "2. SEARCH" << std::setw(21) << "|\n";
	std::cout << "|" << std::setw(27) << "3. EXIT" << std::setw(23) << "|\n";
	std::cout << "--------------------------------------------------\n\n\n" << std::endl;
}

void book::add() {
	std::cout << "first name: ";
	std::cin >> this->_firstName;
	std::cout << "last name: ";
	std::cin >> this->_lastName;
	std::cout << "nickName: ";
	std::cin >> this->_nickName;
	std::cout << "login: ";
	std::cin >> this->_login;
	std::cout << "postal address: ";
	std::cin >> this->_postalAdresse;
	std::cout << "email address: ";
	std::cin >> this->_emailAdresse;
	std::cout << "phone number: ";
	std::cin >> this->_phoneNumber;
	std::cout << "birthday date: ";
	std::cin >> this->_birthdayDate;
	std::cout << "favorite meal: ";
	std::cin >> this->_favoriteMeal;
	std::cout << "underwear color: ";
	std::cin >> this->_uColor;
	std::cout << "darkest secret: ";
	std::cin >> this->_darkestSecret;

}

void book::search() {
	std::cout << "First Name: \t\t" << this->_firstName << std::endl;
	std::cout << "Last Name: \t\t" << this->_lastName << std::endl;
	std::cout << "nickName: \t\t" << this->_nickName << std::endl;
	std::cout << "login: \t\t\t" << this->_login << std::endl;
	std::cout << "postal address: \t" << this->_postalAdresse << std::endl;
	std::cout << "email address: \t\t" << this->_emailAdresse << std::endl;
	std::cout << "phone number: \t\t" << this->_phoneNumber << std::endl;
	std::cout << "birthday date: \t\t" << this->_birthdayDate << std::endl;
	std::cout << "favorite meal: \t\t" << this->_favoriteMeal << std::endl;
	std::cout << "underwear color: \t" << this->_uColor << std::endl;
	std::cout << "darkest secret: \t" << this->_darkestSecret << std::endl;
	
}

std::string	more_ten(std::string str) {
	std::string buff;
	buff = str.erase(9, str.length() - 9);
	buff.append(".");
	return (buff);
}

void book::contact() {

	std::string buff;
	buff = (this->_firstName.length() < 10) ? this->_firstName : more_ten(this->_firstName);
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << buff; 
	buff = (this->_lastName.length() < 10) ? this->_lastName : more_ten(this->_lastName);
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << buff; 
	buff = (this->_nickName.length() < 10) ? this->_nickName : more_ten(this->_nickName);
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << buff << "|" << std::endl; 

}

book::~book() {
	return ;
}

int		main(void) {
	book b[8];
	std::string input;
	int i = 0;
	int index = 0;

	intro();

	while (true) {
		std::cout << "$Command~> " ;
		std::cin >> input;
		if (input == "EXIT")
			break ;
		else if (input == "ADD") {
			if (index < MAX_CONTACT)
				b[index++].add();
			else
				std::cout << "you reach max contact" << std::endl;
		}
		else if (input == "SEARCH") {
			std::cout << "|" << "     index";
			std::cout << "|" << "first name";
			std::cout << "|" << " last name";
			std::cout << "|" << "  nickname|" << std::endl;
			for (i = 0; i < index; i++) {
				std::cout << "|";
				std::cout << std::setw(10);
				std::cout << i;
				b[i].contact();
			}
			if (index > 0)
			{
				std::cout << "index: ";
				std::cin >> i;
				if (i >= 0 && i < index && std::cin.good()) {
					b[i].search();
				}
				else {
					std::cout << "No contact in this index" << std::endl;
					std::cin.clear();
					std::cin.ignore(INT_MAX, '\n');
				}
			}
		}
		else
			std::cout << "wrong command" << std::endl;
	}
	return 0;
}
