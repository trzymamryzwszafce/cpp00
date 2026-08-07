#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		index;
		int		count;

	public:
		PhoneBook();
		void addContact();
		void searchContact();
};

#endif
