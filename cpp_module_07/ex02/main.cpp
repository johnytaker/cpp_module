/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:36:24 by iugolin           #+#    #+#             */
/*   Updated: 2023/10/08 13:47:13 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"

int main(void)
{
	std::cout << "<----------empty test--------->" << std::endl;
	Array<int> empty;
	std::cout << empty.size() << std::endl;

	std::cout << "<----------copy test---------->" << std::endl;
	Array<int> original(2);
	for (int i = 0; i < 2; i++)
	{
		original[i] = i;
		std::cout << "original - "<< original[i] << std::endl;
	}
	Array<int>copy(original);
	for (int i = 0; i < 2; i++)
		std::cout << "copy - "<< copy[i] << std::endl;
	std::cout << "<---------access test--------->" << std::endl;
	try
	{
		const Array<float> f(4);
		f[0] = 42.42f;
		for (int i = 0; i < 5; i++)
			std::cout << "Index: " << i << "; Value: " << f[i] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "<-------assignment test------->" << std::endl;
	try
	{
		Array<int> v(5);
		Array<int> k(1);
		for (int i = 0; i < 5; i++)
			v[i] = i;
		k = v;
		for (int i = 0; i < 6; i++) {
			std::cout << i << " – " << v[i] << " | " << k[i] << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Array<std::string> v(5);
		Array<std::string> k(1);
		for (int i = 0; i < 5; i++)
			v[i] = "string";
		k = v;
		for (int i = 0; i < 8; i++) {
			std::cout << i << " – " << v[i] << " | " << k[i] << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return(0);
}
