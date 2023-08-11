/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:54:58 by iugolin           #+#    #+#             */
/*   Updated: 2023/08/10 19:34:32 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"
#include "PhoneBook.utils.hpp"
# include <iostream>
# include <iomanip>
# include <string>

class PhoneBook
{
	private:
		Contact 		_contacts[8];
		unsigned int	_index;
		unsigned int	_current;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		// Contact getContact(int index);
		void addContact(void);
		void displayContacts();
		void searchContact(void);
};

#endif
