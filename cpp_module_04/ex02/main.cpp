/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:26:47 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/18 15:38:18 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

#define SIZE 10

int main()
{
	// {
	// 	AAnimal animal;
	// }
	{
		std::cout << "!---------TEST1---------!" << std::endl;
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();
		std::cout << std::endl;

		delete j;//should not create a leak
		delete i;
	}
	std::cout << std::endl;
	{
		std::cout << "!---------TEST2---------!" << std::endl;
		AAnimal* j = new Cat();
		AAnimal* i = new Cat();

		(*i) = (*j);
		
		delete j;//should not create a leak
		delete i;
	}
	std::cout << std::endl;
	{
		std::cout << "!---------TEST2.1---------!" << std::endl;
		AAnimal* j = new Dog();
		AAnimal* i = new Dog();
		
		(*i) = (*j);
		
		delete j;//should not create a leak
		delete i;
		
	}
	std::cout << std::endl;
	{
		std::cout << "!---------TEST3---------!" << std::endl;
		Cat a;
		Cat b;
		std::cout << "Cat b brain address: " << b.getBrain() << std::endl;
		a = b;
		std::cout << "Cat a brain address: " << a.getBrain() << std::endl;
	}
	std::cout << std::endl;
	{
		std::cout << "!---------TEST3.1---------!" << std::endl;
		Dog a;
		Dog b;
		std::cout << "Dog b brain address: " << b.getBrain() << std::endl;
		a = b;
		std::cout << "Dog a brain address: " << a.getBrain() << std::endl;
	}
	std::cout << std::endl;
	{
		std::cout << "!---------TEST4---------!" << std::endl;
		Dog basic;
		std::cout << "Dog basic brain address: " << basic.getBrain() << std::endl;
		{
			Dog tmp = basic;
			std::cout << "Dog tmp brain address: " << tmp.getBrain() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::cout << "!---------TEST4.1---------!" << std::endl;
		Cat basic;
		std::cout << "Cat basic brain address: " << basic.getBrain() << std::endl;
		{
			Cat tmp = basic;
			std::cout << "Cat tmp brain address: " << tmp.getBrain() << std::endl;
		}
		
	}
	std::cout << std::endl;
	{
		std::cout << "!---------TEST5---------!" << std::endl;
		AAnimal * shelter[SIZE];

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
	}

	return 0;
}
