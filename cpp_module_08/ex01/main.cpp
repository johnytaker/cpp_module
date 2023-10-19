/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 20:06:18 by iugolin           #+#    #+#             */
/*   Updated: 2023/10/18 16:53:26 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	std::cout << "<------------test_01------------>" << std::endl;
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << "<-----------test_02------------>" << std::endl;
	{
		try
		{
			std::vector<int> v(10001);
			Span sp = Span(v.size());

			srand(time(NULL));
			std::generate(v.begin(), v.end(), std::rand);
			sp.addNumbers(v.begin(), v.end());
			// sp.display();
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			sp.addNumber(11);

		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return (0);
}
