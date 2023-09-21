/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:28:34 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/20 11:20:53 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

# define CT 6

int main(void)
{
	{
		std::cout << "---------------test01---------------" << std::endl;
		try
		{
			Bureaucrat tom("Tom", 2);
			std::cout << tom << std::endl;
			for (int i = 0; i < CT; i++)
			{
				tom.incrementGrade();
				std::cout << tom << std::endl;
			}
		}
		catch (std::exception const & e)
		{
			std::cerr << "Caught exception: " << e.what() << std::endl;
		}
	}
	// std::cout << std::endl;
	{
		std::cout << "---------------test02---------------" << std::endl;
		try
		{
			Bureaucrat shaun("Shaun", 145);
			std::cout << shaun << std::endl;
			for (int i = 0; i < CT; i++)
			{
				shaun.decrementGrade();
				std::cout << shaun << std::endl;
			}
		}
		catch (const std::exception & e)
		{
			std::cerr << "Caught exception: " << e.what() << std::endl;
		}
	}
	{
		std::cout << "---------------test03---------------" << std::endl;
		try
		{
			Bureaucrat paul("Paul", 0);
		}
		catch(const std::exception & e)
		{
			std::cerr << "Caught exception: " << e.what() << std::endl;;
		}
	}
	{
		std::cout << "---------------test04---------------" << std::endl;
		try
		{
			Bureaucrat * t = new Bureaucrat("Mike", 151);

			delete t;
		}
		catch(const std::exception & e)
		{
			std::cerr << "Caught exception: " << e.what() << std::endl;;
		}
	}
	return (0);
}
