/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:42:58 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/22 18:41:09 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:

		Form(std::string const name, int const gradeToSign, int const gradeToExecute);
		Form(Form const & other);
		~Form(void);

		Form & operator=(Form const & rhs);

		std::string const & getName(void) const;
		bool getSigned(void) const;
		int const & getGradeToSign(void) const;
		int const & getGradeToExecute(void) const;

		void beSigned(Bureaucrat const & bureaucrat);

		class GradeTooHighException : public std::exception
		{
			public:
				const char * what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char * what() const throw();
		};

	private:

		Form(void);
		std::string const _name;
		int const _gradeToSign;
		int const _gradeToExecute;
		bool _signed;;
};

std::ostream & operator<<(std::ostream & os, Form const & form);

#endif
