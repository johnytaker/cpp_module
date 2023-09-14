/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:41:10 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/13 12:24:42 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	{
		Fixed a;
		Fixed b(a);
		Fixed c;

		c = b;

		std::cout << a.getRawBits() << std::endl;
		std::cout << b.getRawBits() << std::endl;
		std::cout << c.getRawBits() << std::endl;
	}
	// std::cout << std::endl;
	// {
	// 	Fixed e;
		
	// 	std::cout << e.getRawBits() << std::endl;
	// 	e.setRawBits(10);
	// 	std::cout << e.getRawBits() << std::endl;
	// }
	return 0;
}
