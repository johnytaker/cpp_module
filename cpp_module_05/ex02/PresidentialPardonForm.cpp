/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:38:42 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/21 13:59:05 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <cstdlib>

PresidentialPardonForm::PresidentialPardonForm(void) : AForm(NULL, 25, 5)
{
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;    
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target)
    : AForm(target, 25, 5), _target(target)
{
    std::cout << "PresidentialPardonForm " << _target <<  " constuctor called" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & other)
    : AForm(other), _target(other.getTarget())
{
    std::cout << "PresidentialPardonForm " << _target <<  "copy constuctor called" << std::endl;
}
PresidentialPardonForm::~PresidentialPardonForm(void)
{
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
    AForm::operator=(rhs);
    if (this != &rhs)
        this->_target = rhs.getTarget();
    return *this;
}

std::string  PresidentialPardonForm::getTarget(void) const
{
    return this->_target;
}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    try
    {
        if (this->getSigned() == false)
            throw FormNotSignedException();
        else if (executor.getGrade() > this->getGradeToExecute())
            throw GradeTooLowException();
        else
            std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }
}