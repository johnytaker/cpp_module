/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:31:30 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/23 00:16:36 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
#include <unistd.h>

class AForm;

class RobotomyRequestForm : public AForm
{
	public:

		RobotomyRequestForm(std::string const & target);
		RobotomyRequestForm(RobotomyRequestForm const & other);
		~RobotomyRequestForm(void);

		RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);

		std::string  getTarget(void) const;

		void execute(Bureaucrat const & executor) const;
	private:

		RobotomyRequestForm(void);
		std::string _target;
};

#endif
