/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:28:34 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/20 16:44:53 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Form * form = new Form("Form-420", 130, 30);
	std::cout << *form << std::endl;
	{
		std::cout << "---------------test01---------------" << std::endl;
		try
		{
			Bureaucrat * bob = new Bureaucrat("Bob", 131);
			Form *new_form = form;
			bob->signForm(*new_form);
			std::cout << *bob << std::endl;
			std::cout << *new_form << std::endl;
			delete bob;
		}
		catch (std::exception const & e)
		{
			std::cerr << "Caught exception: " << e.what() << std::endl;
		}
	}
	{
		std::cout << "---------------test02---------------" << std::endl;
		try
		{
			Bureaucrat * josh = new Bureaucrat("Josh", 129);
			Form *new_form = form;
			josh->signForm(*new_form);
			std::cout << *josh << std::endl;
			std::cout << *new_form << std::endl;
			delete josh;
		}
		catch (std::exception const & e)
		{
			std::cerr << "Caught exception: " << e.what() << std::endl;
		}
	}
	delete form;
	{
		std::cout << "---------------test03---------------" << std::endl;
		try
		{
			Form * f = new Form("F-222a", 300, 10);
			delete f;
		}
		catch(const std::exception& e)
		{
			std::cerr << "Caught exception: " << e.what() << std::endl;
		}
	}
	{
		std::cout << "---------------test04---------------" << std::endl;
		try
		{
			Form * f = new Form("F-222a", 0, -100);
			delete f;
		}
		catch(const std::exception& e)
		{
			std::cerr << "Caught exception: " << e.what() << std::endl;
		}

	}
	// std::cout << std::endl;

	return (0);
}
