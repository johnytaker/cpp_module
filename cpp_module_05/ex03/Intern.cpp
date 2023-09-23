/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 00:27:38 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/23 12:50:08 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(Intern const & other)
{
	*this = other;
}

Intern::~Intern(void) {}

Intern & Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return *this;
}

const char * Intern::IncorrectFormException::what() const throw()
{
	return "Incorrect form name";
}

AForm * Intern::makeForm(std::string const formName, std::string const target)
{
	AForm * ptr = NULL;
	std::string forms[3] =
	{
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	try
	{
		int i = 0;
		while (i < 3 && formName != forms[i])
			i++;
		switch (i)
		{
			case 0:
				ptr = new ShrubberyCreationForm(target);
				break;
			case 1:
				ptr = new RobotomyRequestForm(target);
				break;
			case 2:
				ptr = new PresidentialPardonForm(target);
				break;
			default:
				throw IncorrectFormException();
		}
		std::cout << "Intern creates " << *ptr << std::endl;
		// return ptr;
	}
	catch(const std::exception & e)
	{
		std::cerr << "Exception caught: " << e.what() << '\n';
	}
	return ptr;
}
