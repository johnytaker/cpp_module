/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:26:47 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/15 11:32:34 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

#define SIZE 10

int main()
{
	std::cout << "!---------TEST1---------!" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl;

	delete j;//should not create a leak
	delete i;
	std::cout << std::endl;

	std::cout << "!---------TEST2---------!" << std::endl;
	Cat leo;
	Cat tom(leo);
	std::cout << std::endl;

	std::cout << "!---------TEST3---------!" << std::endl;
	Cat fluffy;
	fluffy = tom;
	std::cout << std::endl;


	std::cout << "!---------TEST4---------!" << std::endl;
	Animal * shelter[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		if (i < SIZE / 2)
			shelter[i] = new Cat();
		else
			shelter[i] = new Dog();
	std::cout << std::endl;
	}
	std::cout << std::endl;
	for (int i = 0; i < SIZE; i++)
		delete shelter[i];

	return 0;
}
