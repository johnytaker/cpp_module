/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:31:30 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/22 19:08:30 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIOALPARDONFORM_HPP
# define PRESIDENTIOALPARDONFORM_HPP

# include "AForm.hpp"

class AForm;

class PresidentialPardonForm : public AForm
{
	public:

		PresidentialPardonForm(std::string const & target);
		PresidentialPardonForm(PresidentialPardonForm const & other);
		~PresidentialPardonForm(void);

		PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);

		std::string  getTarget(void) const;

		void execute(Bureaucrat const & executor) const;

	private:

		PresidentialPardonForm(void);
		std::string _target;
};

#endif
