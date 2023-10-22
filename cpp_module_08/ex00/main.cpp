/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:29:08 by iugolin           #+#    #+#             */
/*   Updated: 2023/10/19 12:28:42 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
# include <iostream>
#include <list>
#include <vector>

#define SIZE 	50
#define VALUE	15

int main(void)
{
	{
		std::cout << "<----------------LIST TESTING---------------->" << std::endl;
		std::list<int> lst;
		std::list<int>::const_iterator it;

		for (int i = 0; i < SIZE; i++)
			lst.push_back(i + 1);
		std::cout << "List size: " << lst.size() << std::endl;
		try
		{
			it = easyfind(lst, VALUE);
			std::cout << "requested element: " << *it << " was found"<< std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "<---------------VECTOR TESTING--------------->" << std::endl;
		std::vector<int> vct;
		std::vector<int>::const_iterator it;

		for (int i = 0; i < SIZE; i++)
			vct.push_back(i + 1);
		std::cout << "Vector size: " << vct.size() << std::endl;
		try
		{
			it = easyfind(vct, VALUE);
			std::cout << "requested element: " << *it << " was found" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return (0);
}
