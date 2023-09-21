/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:28:34 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/21 14:00:17 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	// {
	// 	std::cout << "---------------test01---------------" << std::endl;
	// 	try
	// 	{
	// 		Bureaucrat * bob = new Bureaucrat("Bob", 131);

	// 	}
	// 	catch (std::exception const & e)
	// 	{
	// 		std::cerr << "Caught exception: " << e.what() << std::endl;
	// 	}
	// }
	// {
	// 	std::cout << "---------------test02---------------" << std::endl;
	// 	try
	// 	{
	// 		Bureaucrat * josh = new Bureaucrat("Josh", 129);

	// 	}
	// 	catch (std::exception const & e)
	// 	{
	// 		std::cerr << "Caught exception: " << e.what() << std::endl;
	// 	}
	// }
	// {
	// 	std::cout << "---------------test03---------------" << std::endl;
	// 	try
	// 	{

	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cerr << "Caught exception: " << e.what() << std::endl;
	// 	}
	// }
	// {
	// 	std::cout << "---------------test04---------------" << std::endl;
	// 	try
	// 	{

	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cerr << "Caught exception: " << e.what() << std::endl;
	// 	}

	// }
	// std::cout << std::endl;

	// Bureaucrat vova("Vova", 137);
	// ShrubberyCreationForm garden("Garden");
	
	// vova.signForm(garden);
	// vova.executeForm(garden);

	Bureaucrat dima("Dima", 25);
	PresidentialPardonForm pardon("R2D2");

	dima.signForm(pardon);
	dima.executeForm(pardon);
	

	return (0);
}
