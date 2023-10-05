/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 19:11:43 by iugolin           #+#    #+#             */
/*   Updated: 2023/10/05 13:55:18 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>

Base * generate(void)
{
	switch (rand() % 3)
	{
	case 0:
		return new A();
	case 1:
		return new B();
	case 2:
		return new C();
	default:
		std::cout << "Invalid value" << std::endl;
		break;
	}
	return (NULL);
}

void identify(Base * p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "The actual type of the object is A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "The actual type of the object is B" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "The actual type of the object is C" <<std::endl;
	else
		std::cout << "Invalid type" << std::endl;
}

void identify(Base & p)
{
	try
	{
		A & a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "The actual type of the object is A" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		B & b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "The actual type of the object is B" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		C & c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "The actual type of the object is C" <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
