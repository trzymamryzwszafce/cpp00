#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : index(0), count(0) {}

void PhoneBook::addContact()
{
	this->contacts[this->index].setVariable();
	this->index = (this->index + 1) % 8;
	if (this->count < 8)
		this->count++;
}

void PhoneBook::searchContact()
{
	if (this->count == 0)
	{
		std::cout << "No contacts" << std::endl;
		return;
	}
	for (int i = 0; i < this->count; i++)
		this->contacts[i].printIndex(i);
}
