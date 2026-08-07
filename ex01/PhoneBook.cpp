#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : index(0), count(0) {}

void PhoneBook::addContact()
{
	std::cout << std::endl;
	this->contacts[this->index].setVariable();
	this->index = (this->index + 1) % 8;
	if (this->count < 8)
		this->count++;
}

void PhoneBook::searchContact()
{
	std::string str;
	int number;

	if (this->count == 0)
	{
		std::cout << "No contacts" << std::endl;
		return;
	}
	std::cout << std::endl;
	for (int i = 0; i < this->count; i++)
		this->contacts[i].printIndex(i);
start:
	std::cout << std::endl << "Enter Index: ";
	std::getline(std::cin, str);
	std::stringstream ss(str);
	ss >> number;
	number--;
	if (number >= 0 && number < this->count)
	{
		std::cout << std::endl;
		contacts[number].printContact();
	}
	else 
	{
		std::cout << "Wrong index provided" << std::endl;
		goto start;
	}
}
