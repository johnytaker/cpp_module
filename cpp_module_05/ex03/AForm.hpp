/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:42:58 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/22 18:44:11 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:

		AForm(std::string const name, int const gradeToSign, int const gradeToExecute);
		AForm(AForm const & other);
		virtual ~AForm(void);

		AForm & operator=(AForm const & rhs);

		std::string const & getName(void) const;
		bool getSigned(void) const;
		int const & getGradeToSign(void) const;
		int const & getGradeToExecute(void) const;

		void beSigned(Bureaucrat const & bureaucrat);

		virtual void execute(Bureaucrat const & executor) const = 0;

		void checkRequirementsToExecute(Bureaucrat const & executor) const;

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
		class FormNotSignedException : public std::exception
		{
			public:
				const char * what() const throw();
		};
	private:
		AForm(void);
		std::string const _name;
		int const _gradeToSign;
		int const _gradeToExecute;
		bool _signed;;
};
std::ostream & operator<<(std::ostream & os, AForm const & form);

#endif
