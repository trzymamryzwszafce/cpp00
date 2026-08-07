#include "Contact.hpp"

Contact::Contact() {}

void Contact::printContact()
{
	std::cout << "Firstname: " << this->firstname << std::endl;
	std::cout << "Lastname: " << this->lastname << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phonenumber << std::endl;
	std::cout << "Darkest secret: " << this->darkestsecret << "\n\n";
}

std::string Contact::printFormat(std::string input)
{
	if (input.size() <= 10)
		return input;
	else
		return (input = input.substr(0, 9) + ".");
}

void Contact::printIndex(int index)
{
	std::cout	<< std::setw(10) << index + 1 << "|"
				<< std::setw(10) << printFormat(this->firstname) << "|"
				<< std::setw(10) << printFormat(this->lastname) << "|"
				<< std::setw(10) << printFormat(this->nickname) << "|" << std::endl;
}

int	 Contact::isWhitespace(std::string input)
{
	for (unsigned int i = 0; i < input.size(); i++)
	{
		if (std::isalpha(input[i]) || std::isdigit(input[i]))
			return 0;
	}
	return 1;
}

int  Contact::phoneCheck(std::string input)
{
	unsigned i = input.size();
	if (i != 9)
		return 1;
	for (; i <= 9; i++)
	{
		if (std::isdigit(input[i]))
			return 1;
	}
	return (0);
}

void Contact::setVariable()
{
	this->firstname = getVariable("Enter first name: ");
	this->lastname = getVariable("Enter last name: ");
	this->nickname = getVariable("Enter nickname: ");
	this->phonenumber = getVariable("Enter phone number: ");
	this->darkestsecret = getVariable("Enter Darkest secret: ");
	std::cout << "New contact added" << "\n\n";
}

std::string Contact::getVariable(std::string message)
{
	std::string input;

start:
	std::cout << message;
	std::getline(std::cin, input);
		if (message == "Enter phone number: ")
		{
			if (phoneCheck(input))
			{
				std::cout << "Enter exactly 9 digits" << std::endl;
				goto start;
			}
		}
		else if (input.size() == 0 || isWhitespace(input))
	{
		std::cout << "Input cannot be empty" << std::endl;
		goto start;
	}
	return(input);
}
