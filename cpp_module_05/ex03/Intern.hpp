/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 00:27:25 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/23 13:55:55 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(Intern const & other);
		~Intern(void);

		Intern & operator=(Intern const & rhs);
		class IncorrectFormException : public std::exception
		{
			public:
				const char *what() const throw();
		};

		AForm * makeForm(std::string const formName, std::string const target);
};

#endif
