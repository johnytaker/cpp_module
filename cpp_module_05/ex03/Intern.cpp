/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 00:27:38 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/23 13:42:39 by iugolin          ###   ########.fr       */
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

static AForm * shrubberyCreateForm(std::string const & target)
{
	return (new ShrubberyCreationForm(target));
}

static AForm * robotomyCreatetForm(std::string const & target)
{
	return (new RobotomyRequestForm(target));
}

static AForm * pardonCreateForm(std::string const & target)
{
	return (new PresidentialPardonForm(target));
}



AForm * Intern::makeForm(std::string const formName, std::string const target)
{
	AForm * (* funcArr[3])(std::string const &target) =
	{
		shrubberyCreateForm,
		robotomyCreatetForm,
		pardonCreateForm
	};
	std::string formNames[3] =
	{
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	AForm * ret = NULL;

	try
	{
		for (int i = 0; i < 3; i++)
		{
			if (formName == formNames[i])
				ret = funcArr[i](target);
		}
		if (ret)
			std::cout << "Intern creates " << *ret << std::endl;
		else
			throw IncorrectFormException();
	}
	catch(const std::exception & e)
	{
		std::cerr << "Exception caught: " << e.what() << '\n';
	}
	return ret;
}
