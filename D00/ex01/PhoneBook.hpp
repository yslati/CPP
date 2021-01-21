#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <iomanip>

const int MAX_CONTACT = 8;

class book {
	public:
		book();
		std::string cmd;
		void add();
		void search();
		void contact();

		~book();
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _login;
		std::string _postalAdresse;
		std::string _emailAdresse;
		std::string _phoneNumber;
		std::string _birthdayDate;
		std::string _favoriteMeal;
		std::string _uColor;
		std::string _darkestSecret;
};

#endif