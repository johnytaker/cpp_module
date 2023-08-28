/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:54:58 by iugolin           #+#    #+#             */
/*   Updated: 2023/08/24 12:04:48 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <iomanip>
# include <string>
# include <limits>

# define RED	"\033[31m"
# define GREEN	"\033[32m"
# define BROWN	"\033[33m"
# define RESET	"\033[0m"


class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void addContact(void);
		void displayContacts(void);
		void searchContact(void);
		void run(void);

	private:
		Contact	_contacts[8];
		int		_indexFiller;
		int		_currentIndex;
};


std::string colorString(std::string str, std::string color);
std::string resizeField(std::string text);
void getInput(const std::string& prompt, std::string& input);

#endif
