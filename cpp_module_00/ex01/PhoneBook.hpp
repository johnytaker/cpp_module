/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:54:58 by iugolin           #+#    #+#             */
/*   Updated: 2023/08/23 22:00:08 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <iomanip>
# include <string>

# define RED	"\033[31m"
# define GREEN	"\033[32m"
# define BROWN	"\033[33m"
# define BLUE	"\033[34m"
# define MAGENTA	"\033[35m"
# define CYAN	"\033[36m"
# define LIGHTGRAY	"\033[37m"
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
void getInput(const std::string& prompt, std::string& input);
std::string resizeField(std::string text);

#endif
