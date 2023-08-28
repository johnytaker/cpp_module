/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:42:30 by iugolin           #+#    #+#             */
/*   Updated: 2023/08/24 12:03:21 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_indexFiller = 0;
	this->_currentIndex = 0;
	std::cout << colorString("CMD: |ADD| |SEARCH| |EXIT|", GREEN) << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << colorString("No contacts - no problems!", GREEN) << std::endl;
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
		this->_indexFiller = this->_currentIndex;
	else
		std::cout << GREEN
		<< "The contact with index #" << _currentIndex % 8 << " is overwritten!"
		<< RESET << std::endl;
}


void PhoneBook::displayContacts(void)
{
	std::cout << GREEN << " " << std::setfill('_') << std::setw(44) << " " << std::endl;
	std::cout << "|" << std::setfill(' ') << std::setw(10)  << "INDEX";
	std::cout << "|" << std::setfill(' ') << std::setw(10)  << "FIRST NAME";
	std::cout << "|" << std::setfill(' ') << std::setw(10)  << "LAST NAME";
	std::cout << "|" << std::setfill(' ') << std::setw(10)  << "NICKNAME" << "|" << RESET << std::endl;

	for (int i = 0; i < this->_indexFiller; i++)
	{
			std::cout
			<< colorString("|", GREEN) << std::setw(10) << i + 1
			<< colorString("|", GREEN) << std::setw(10) << resizeField(_contacts[i].getFirstName())
			<< colorString("|", GREEN) << std::setw(10) << resizeField(_contacts[i].getLastName())
			<< colorString("|", GREEN) << std::setw(10) << resizeField(_contacts[i].getNickname())
			<< colorString("|", GREEN) << std::endl;
	}
	std::cout << GREEN << "|" << std::setfill('_') << std::setw(44) << "|" << std::endl;
}

void PhoneBook::searchContact(void)
{
	int index;

	if (this->_currentIndex == 0)
		std::cout << colorString("PhoneBook is empty!", RED) << std::endl;
	else
	{
		displayContacts();
		std::cout << colorString("Enter the required index: ", GREEN);
		std::cin >> index;
		if (std::cin && index < (this->_indexFiller + 1))
		{
			std::cout << colorString("First name: ", GREEN) << this->_contacts[index - 1].getFirstName() << std::endl;
			std::cout << colorString("Last name: ", GREEN) << this->_contacts[index - 1].getLastName() << std::endl;
			std::cout << colorString("Nickname: ", GREEN) << this->_contacts[index - 1].getNickname() << std::endl;
			std::cout << colorString("Phone number: ", GREEN) << this->_contacts[index - 1].getPhoneNumber() << std::endl;
			std::cout << colorString("Darkest secret: ", GREEN) << this->_contacts[index -1].getDarkestSecret() << std::endl;
		}
		else
			std::cout << colorString("Invalid index!", RED) << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

void PhoneBook::run(void)
{
	std::string cmd;

	while (1)
	{
		std::cout << colorString("Enter a command: ", GREEN);
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			this->addContact();
		else if (cmd == "SEARCH")
			this->searchContact();
		else if (cmd == "EXIT")
			return ;
		else
			std::cout << colorString("Wrong command!", RED) << std::endl;
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

std::string colorString(std::string str, std::string color)
{
	std::string ret;

	return (ret.append(color).append(str).append(RESET));
}

void getInput(const std::string& prompt, std::string& input)
{
	while (1)
	{
		std::cout << colorString(prompt, GREEN);
		if (std::getline(std::cin, input) && !input.empty())
			break;
	}
}
