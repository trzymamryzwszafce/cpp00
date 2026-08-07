#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phonenumber;
		std::string darkestsecret;

	public:
		Contact();

		void setVariable();
		void printIndex(int index);
		void printContact();
		std::string getVariable(std::string message);
};

#endif
