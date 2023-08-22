/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:42:30 by iugolin           #+#    #+#             */
/*   Updated: 2023/08/22 15:36:06 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_index = 0;
	this->_currentIndex = 0;
	std::cout << "Welcome to my Crappy PhoneBook!" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Bye!" << std::endl;
}

void PhoneBook::addContact(void)
{
	Contact		tempContact;
	std::string tempStr;

	getInput("Enter a first name: ", tempStr);
	tempContact.setFirstName(tempStr);

	getInput("Enter a last name: ", tempStr);
	tempContact.setLastName(tempStr);

	getInput("Enter a nickame: ", tempStr);
	tempContact.setNickname(tempStr);

	getInput("Enter a phone number: ", tempStr);
	tempContact.setPhoneNumber(tempStr);

	getInput("Enter a darkest secret: ", tempStr);
	tempContact.setDarkestSecret(tempStr);

	this->_contacts[_currentIndex % 8] = tempContact;
	this->_currentIndex++;
	if (this->_currentIndex <= 8)
		this->_index = this->_currentIndex;
	else
		std::cout << "The contact with index "<< _currentIndex % 8  << " will be overwritten!" << std::endl;
}


void PhoneBook::displayContacts(void)
{

	std::cout << " ___________________________________________" << std::endl;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;

	for (int i = 0; i < this->_index; i++)
	{
			std::cout
			<< "|" << std::setw(10) << i + 1
			<< "|" << std::setw(10) << resizeField(_contacts[i].getFirstName())
			<< "|" << std::setw(10) << resizeField(_contacts[i].getLastName())
			<< "|" << std::setw(10) << resizeField(_contacts[i].getNickname())
			<< "|" << std::endl;
	}
}

void PhoneBook::searchContact(void)
{
	int index;

	displayContacts();

	std::cout << "Enter the required index: ";
	std::cin >> index;

	if (std::cin && index < (this->_index + 1))
	{
		std::cout << "First name: " << this->_contacts[index - 1].getFirstName() << std::endl;
		std::cout << "Last name: " << this->_contacts[index - 1].getLastName() << std::endl;
		std::cout << "Nickname: " << this->_contacts[index - 1].getNickname() << std::endl;
		std::cout << "Phone number: " << this->_contacts[index - 1].getPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " << this->_contacts[index -1].getDarkestSecret() << std::endl;
	}
	else
		std::cout << "Invalid index!" << std::endl;
	std::cin.clear();
	std::cin.ignore(256, '\n');
}

void getInput(const std::string& prompt, std::string& input)
{
	while (1)
	{
		std::cout << prompt;
		if (std::getline(std::cin, input) && !input.empty())
			break;
	}
}

std::string	resizeField(std::string text)
{
	if (text.length() > 10)
	{
		text.erase(text.begin() + 9, text.end());
		text.append(".");
	}
	return (text);
}