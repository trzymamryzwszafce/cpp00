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
	std::cout << message;
	std::getline(std::cin, input);
	return(input);
}
