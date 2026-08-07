#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <cctype>

class Contact
{
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phonenumber;
		std::string darkestsecret;
		int         isWhitespace(std::string input);
		int         phoneCheck(std::string input);
		std::string printFormat(std::string input);

	public:
		Contact();

		void setVariable();
		void printIndex(int index);
		void printContact();
		std::string getVariable(std::string message);
};

#endif
