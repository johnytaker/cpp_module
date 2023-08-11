/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:43:02 by iugolin           #+#    #+#             */
/*   Updated: 2023/08/10 13:38:19 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string Contact::getFirstName(void) const
{
	return this->_firstName;
}

std::string Contact::getLastName(void) const
{
	return this->_lastName;
}

std::string Contact::getNickname(void) const
{
	return this->_nickName;
}

std::string Contact::getPhoneNumber(void) const
{
	return this->_phoneNumber;
}

std::string Contact::getDarkestSecret(void) const
{
	return this->_darkestSecret;
}

void Contact::setFirstName(std::string str)
{
	this->_firstName = str;
}

void Contact::setLastName(std::string str)
{
	this->_lastName = str;
}

void Contact::setNickname(std::string str)
{
	this->_nickName = str;
}

void Contact::setPhoneNumber(std::string str)
{
	this->_phoneNumber = str;
}

void Contact::setDarkestSecret(std::string str)
{
	this->_darkestSecret = str;
}
