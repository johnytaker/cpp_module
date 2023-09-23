/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:06:44 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/23 00:16:16 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class AForm;

class ShrubberyCreationForm : public AForm
{
	public:

		ShrubberyCreationForm(std::string const & target);
		ShrubberyCreationForm(ShrubberyCreationForm const & other);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);

		std::string  getTarget(void) const;

		class WriteToFileException : public std::exception
		{
			public:
				const char * what() const throw();
		};

		void execute(Bureaucrat const & executor) const;

	private:

		ShrubberyCreationForm(void);

		std::string _target;
};

#endif
