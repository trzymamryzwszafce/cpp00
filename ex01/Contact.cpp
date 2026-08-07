#include "Contact.hpp"

Contact::Contact() {}

void Contact::printContact()
{
	std::cout << "imie: " << this->firstname << std::endl;
	std::cout << "nazwisko: " << this->lastname << std::endl;
	std::cout << "nickname: " << this->nickname << std::endl;
	std::cout << "telefon: " << this->phonenumber << std::endl;
	std::cout << "sekret: " << this->darkestsecret << std::endl;
}

void Contact::printIndex(int index)
{
	std::cout	<< std::setw(10) << index << "|"
				<< std::setw(10) << this->firstname << "|"
				<< std::setw(10) << this->lastname << "|"
				<< std::setw(10) << this->nickname << "|" << std::endl;
}

void Contact::setVariable()
{
	this->firstname = getVariable("Enter first name: ");
	this->lastname = getVariable("Enter last name: ");
	this->nickname = getVariable("Enter nickname: ");
	this->phonenumber = getVariable("Enter phone number: ");
	this->darkestsecret = getVariable("Enter Darkest secret: ");
	std::cout << "New contact added" << std::endl;
}

std::string Contact::getVariable(std::string message)
{
	std::string input;

start:
	std::cout << message;
	std::getline(std::cin, input);
	if (input.size() == 0)
	{
		std::cout << "Input cannot be empty" << std::endl;
		goto start;
	}
	return(input);
}
