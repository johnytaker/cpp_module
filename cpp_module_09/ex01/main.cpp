/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 22:06:50 by iugolin           #+#    #+#             */
/*   Updated: 2023/10/21 23:08:51 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>

int main(int ac, char **av)
{
	RPN rpn;

	if (ac != 2)
		std::cerr << "Usage: " << av[0] << " <RPN expression>" << std::endl;
	else
	{
		try
		{
			rpn.reversePolishNotation(av[1]);
			std::cout << rpn << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}
