/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 21:19:46 by iugolin           #+#    #+#             */
/*   Updated: 2023/10/05 12:23:20 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main (int ac ,char **av)
{
	if (ac != 2)
	{
		std::cerr << "USAGE:  ./converter [literal_to_convert]" << std::endl;
		return (1);
	}
	ScalarConverter::convert(av[1]);

	return (0);
}
