/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 21:23:06 by iugolin           #+#    #+#             */
/*   Updated: 2023/08/11 16:14:51 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

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
		else if (std::cin.eof())
		{
			std::cout << std::endl;
			return 0;
		}
	}
	return 0;
}