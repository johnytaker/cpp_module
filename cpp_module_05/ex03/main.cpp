/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:28:34 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/23 12:51:28 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

# define GRADE 10

int main(void)
{
	Bureaucrat * bobby = new Bureaucrat("Bobby", GRADE);
	Intern randomInterm;
	AForm *new_form = NULL;
	{
		std::cout << "---------------test01---------------" << std::endl;

		new_form = randomInterm.makeForm("shrubbery creation", "plant");
		if (new_form)
		{
			bobby->signForm(*new_form);
			bobby->executeForm(*new_form);
			delete new_form;
		}
	}
	{
		std::cout << "---------------test02---------------" << std::endl;

		new_form = randomInterm.makeForm("robotomy request", "printer");
		if (new_form)
		{
			bobby->signForm(*new_form);
			bobby->executeForm(*new_form);
			delete new_form;
		}
	}
	{
		std::cout << "---------------test03---------------" << std::endl;

		new_form = randomInterm.makeForm("presidential pardon", "Alex");
		if (new_form)
		{
			bobby->signForm(*new_form);
			bobby->executeForm(*new_form);
			delete new_form;
		}
	}
	{
		std::cout << "---------------test04---------------" << std::endl;

		new_form = randomInterm.makeForm("invalid form", "target");
		if (new_form)
		{
			bobby->executeForm(*new_form);
			bobby->signForm(*new_form);
			delete new_form;
		}
	}
	delete bobby;
	return (0);
}
