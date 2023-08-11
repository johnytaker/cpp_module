/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:42:30 by iugolin           #+#    #+#             */
/*   Updated: 2023/08/10 19:58:50 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"


PhoneBook::PhoneBook(void)
{
	this->_index = 0;
	this->_current = 0;
	std::cout << "Welcome to my creepy PhoneBook!" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Bye Bye!" << std::endl;
}

// Contact PhoneBook::getContact(int index)
// {
// 	return this->_contacts[index % 8];
// }

void PhoneBook::addContact(void)
{
	Contact		tempContact;
	std::string tempStr;

	getInput("Enter a first name: ", tempStr);
	tempContact.setFirstName(tempStr);
	tempStr.erase();

	getInput("Enter a last name: ", tempStr);
	tempContact.setLastName(tempStr);
	tempStr.erase();

	getInput("Enter a nickame: ", tempStr);
	tempContact.setNickname(tempStr);
	tempStr.erase();

	getInput("Enter a phone number: ", tempStr);
	tempContact.setPhoneNumber(tempStr);
	tempStr.erase();

	getInput("Enter a darkest secret: ", tempStr);
	tempContact.setDarkestSecret(tempStr);
	tempStr.erase();

	this->_contacts[_current % 8] = tempContact;
	this->_current++;
	if (this->_current <= 8)
		this->_index = this->_current;
}


void PhoneBook::displayContacts()
{
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;

	for (int i = 0; i < (int)this->_index; i++)
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
	unsigned int index;

	displayContacts();

	std::cout << "Enter the required index :";
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
}
