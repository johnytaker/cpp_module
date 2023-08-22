/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 21:23:06 by iugolin           #+#    #+#             */
/*   Updated: 2023/08/20 16:52:33 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook 	pbook;
	std::string	cmd;

	while (cmd != "EXIT")
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			pbook.addContact();
		else if (cmd == "SEARCH")
			pbook.searchContact();
	}
	return (0);
}