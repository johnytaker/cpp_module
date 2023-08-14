/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:54:58 by iugolin           #+#    #+#             */
/*   Updated: 2023/08/14 13:00:20 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"
# include "PhoneBook.utils.hpp"
# include <iostream>
# include <iomanip>
# include <string>


class PhoneBook
{
	private:
		Contact	_contacts[8];
		int		_index;
		int		_currentIndex;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void addContact(void);
		void displayContacts(void);
		void searchContact(void);
};

#endif
