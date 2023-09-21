/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:25:23 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/20 18:54:42 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// Form::Form(void) : _name("Default"), _gradeToSign(150), _gradeToExecute(150), _signed(0)
// {
// 	std::cout << "Form " << _name << " constructor called" << std::endl;
// }

AForm::AForm(std::string const name, int const gradeToSign, int const gradeToExecute)
	: _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _signed(false)
{
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	else if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	// std::cout << "Form " << _name << " constructor called" << std::endl;
}

AForm::AForm(AForm const & other)
	: _name(other.getName()), _gradeToSign(other.getGradeToSign()),
	_gradeToExecute(other.getGradeToExecute()), _signed(other.getSigned())
{
	// std::cout << "Form " << _name << " copy constructor called" << std::endl;
}

AForm::~AForm(void)
{
	// std::cout << "Form " << _name << " destructor called" << std::endl;
}

AForm & AForm::operator=(AForm const & rhs)
{
	if (this != &rhs)
		this->_signed = rhs.getSigned();
	return *this;
}

std::string const & AForm::getName(void) const
{
	return this->_name;
}
bool AForm::getSigned(void) const
{
	return this->_signed;
}
int const & AForm::getGradeToSign(void) const
{
	return this->_gradeToSign;
}
int const & AForm::getGradeToExecute(void) const
{
	return this->_gradeToExecute;
}

void AForm::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw GradeTooLowException();
	else
		this->_signed = true;
}

const char * AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}
const char * AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

std::ostream & operator<<(std::ostream & os, AForm const & form)
{
	os << form.getName() << ": ";
	form.getSigned() ? os << "Signed" << ", " : os << "Not Signed" << ", ";
	os << "Grade to sign: " << form.getGradeToSign() << ", ";
	os << "Grade to execute: " << form.getGradeToExecute();
	return os;
}
