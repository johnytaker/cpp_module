/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:15:35 by iugolin           #+#    #+#             */
/*   Updated: 2023/08/14 13:17:50 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.utils.hpp"

void getInput(const std::string& prompt, std::string& input)
{
	while (1)
	{
		std::cout << prompt;
		if (std::getline(std::cin, input) && !input.empty())
			break;
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
