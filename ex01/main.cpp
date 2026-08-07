#include "PhoneBook.hpp"

int	main()
{
	PhoneBook phonebook;
	std::string prompt;
	while (1)
	{
		std::cout << "Write 'ADD' to add contact, 'SEARCH' to check contacts, 'EXIT' to end program: ";
		std::getline(std::cin, prompt);

		if (prompt == "ADD")
			phonebook.addContact();
		if (prompt == "SEARCH")
			phonebook.searchContact();
		if (prompt == "EXIT")
			return 0;
	}
}
