/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:42:58 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/20 18:57:20 by iugolin          ###   ########.fr       */
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
		// Form(void);
		AForm(std::string const name, int const gradeToSign, int const gradeToExecute);
		AForm(AForm const & other);
		~AForm(void);

		AForm & operator=(AForm const & rhs);

		std::string const & getName(void) const;
		bool getSigned(void) const;
		int const & getGradeToSign(void) const;
		int const & getGradeToExecute(void) const;

		void beSigned(Bureaucrat const & bureaucrat);

		virtual void execute(Bureaucrat const & executor) = 0;

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
		std::string const _name;
		int const _gradeToSign;
		int const _gradeToExecute;
		bool _signed;;
};
std::ostream & operator<<(std::ostream & os, AForm const & form);

#endif
