/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:54:58 by iugolin           #+#    #+#             */
/*   Updated: 2023/08/22 13:10:03 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <iomanip>
# include <string>
# include <stdint.h>


class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void addContact(void);
		void displayContacts(void);
		void searchContact(void);

	private:
		Contact	_contacts[8];
		int		_index;
		int		_currentIndex;
};

void getInput(const std::string& prompt, std::string& input);

std::string resizeField(std::string text);

#endif
