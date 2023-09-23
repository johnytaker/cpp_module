/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:28:34 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/23 00:40:39 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

# define GRADE 1

int main(void)
{
	Bureaucrat * bobby = new Bureaucrat("Bobby", GRADE);
	{
		std::cout << "---------------test01---------------" << std::endl;

		ShrubberyCreationForm form("Garden");

		bobby->signForm(form);
		bobby->executeForm(form);
	}
	{
		std::cout << "---------------test02---------------" << std::endl;

		RobotomyRequestForm form("Scanner");

		bobby->signForm(form);
		bobby->executeForm(form);
	}
	{
		std::cout << "---------------test03---------------" << std::endl;

		PresidentialPardonForm form("Navalny");

		bobby->signForm(form);
		bobby->executeForm(form);
	}
	delete bobby;
	return (0);
}
