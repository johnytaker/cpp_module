/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:14:40 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/22 17:12:59 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const & other);
		~Bureaucrat(void);

		Bureaucrat & operator=(Bureaucrat const & rhs);

		std::string const & getName(void) const;
		int getGrade(void) const;

		void incrementGrade(void);
		void decrementGrade(void);

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
		Bureaucrat(void);
		std::string const _name;
		int _grade;
};

std::ostream & operator<<(std::ostream & os, Bureaucrat const & bureaucrat);

#endif
