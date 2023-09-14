/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:41:10 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/13 14:32:05 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	{
		Fixed a;
		Fixed const b(Fixed(5.05f) * Fixed(2));

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;

		std::cout << b << std::endl;

		std::cout << Fixed::max(a, b) << std::endl;
	}
	std::cout << std::endl;
	{
		Fixed const c(42);
		Fixed const d(Fixed(21.21f) / Fixed(3.3f));
		Fixed const e(c);

		std::cout << "c = " << c << std::endl;
		std::cout << "d = " << d << std::endl;
		std::cout << "e = " << e << std::endl;
		
		std::cout << std::endl;
		std::cout << "Testing comparsion operators" << std::endl;
		std::cout << "/////True is 1, False is 0/////" << std::endl;
		std::cout << std::endl;
		
		std::cout << c << " > " << d << " is " << (c > d) << std::endl;
		std::cout << c << " < " << d << " is " << (c < d) << std::endl;
		std::cout << c << " <= " << d << " is " << (c <= d) << std::endl;
		std::cout << c << " <= " << e << " is " << (c <= e) << std::endl;
		std::cout << c << " >= " << d << " is " << (c >= d) << std::endl;
		std::cout << d << " >= " << c << " is " << (d >= c) << std::endl;
		std::cout << c << " >= " << e << " is " << (c >= e) << std::endl;
		std::cout << c << " == " << d << " is " << (c == d) << std::endl;
		std::cout << c << " == " << e << " is " << (c == e) << std::endl;
		std::cout << c << " != " << d << " is " << (c != d) << std::endl;
		std::cout << c << " != " << e << " is " << (c != e) << std::endl;
	}
	{
		Fixed c(42);
		Fixed const d(Fixed(21.21f) / Fixed(3.3f));
		
		std::cout << std::endl;
		std::cout << "Testing arithmetic operators" << std::endl;
		std::cout << std::endl;
		
		std::cout << c << " * " << d << " = " << (c * d) << std::endl;
		std::cout << c << " / " << d << " = " << (c / d) << std::endl;
		std::cout << c << " + " << d << " = " << (c + d) << std::endl;
		std::cout << c << " - " << d << " = " << (c - d) << std::endl;
	}
	{
		Fixed c(5);
		std::cout << std::endl;
		std::cout << "Testing increment/decrement operators" << std::endl;
		std::cout << std::endl;

		std::cout << c << std::endl;
		std::cout << ++c << std::endl;
		std::cout << c++ << std::endl;
		std::cout << c << std::endl;
		std::cout << --c << std::endl;
		std::cout << c-- << std::endl;
		std::cout << c << std::endl;
	}
	{
		Fixed c(150.15f);
		Fixed d(-21);
		
		std::cout << std::endl;
		std::cout << "Testing max() / min() static member functions" << std::endl;

		std::cout << "max(" << c << ", " << d << ")" << " = " << Fixed::max(c, d) << std::endl;
		std::cout << "min(" << c << ", " << d << ")" << " = " << Fixed::min(c, d) << std::endl;

		std::cout << std::endl;
		std::cout << "Testing max() / min() static const member functions" << std::endl;
		
		Fixed const x(300.12f);
		Fixed const y(21);

		std::cout << "max(" << x << ", " << y << ")" << " = " << Fixed::max(x, y) << std::endl;
		std::cout << "min(" << x << ", " << y << ")" << " = " << Fixed::min(x, y) << std::endl;
	}
	return 0;
}
