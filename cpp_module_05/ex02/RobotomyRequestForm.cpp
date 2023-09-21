/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:38:42 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/21 13:48:38 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(void) : AForm(NULL, 72, 45)
{
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;    
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target)
    : AForm(target, 72, 45), _target(target)
{
    std::cout << "RobotomyRequestForm " << _target <<  " constuctor called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & other)
    : AForm(other), _target(other.getTarget())
{
    std::cout << "RobotomyRequestForm " << _target <<  "copy constuctor called" << std::endl;
}
RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
    AForm::operator=(rhs);
    if (this != &rhs)
        this->_target = rhs.getTarget();
    return *this;
}

std::string  RobotomyRequestForm::getTarget(void) const
{
    return this->_target;
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    try
    {
        if (this->getSigned() == false)
            throw FormNotSignedException();
        else if (executor.getGrade() > this->getGradeToExecute())
            throw GradeTooLowException();
        else
        {
            srand(time(NULL));
            std::cout << "brrr...drrr....drrr...drrrr.." << std::endl;
            if (rand() % 2 == 1)
                std::cout << this->_target << " has been robotimized successfully." << std::endl;
            else
                std::cout << "Target: " << this->_target << ". Robotomy failed." << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }
}