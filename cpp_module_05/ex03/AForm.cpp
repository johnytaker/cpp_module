/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:25:23 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/22 18:56:49 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// AForm::AForm(void) {}

AForm::AForm(
	std::string const name, int const gradeToSign, int const gradeToExecute)
	:	_name(name),
		_gradeToSign(gradeToSign),
		_gradeToExecute(gradeToExecute),
		_signed(false)
{
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	else if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
}

AForm::AForm(AForm const & other)
	:	_name(other.getName()),
		_gradeToSign(other.getGradeToSign()),
		_gradeToExecute(other.getGradeToExecute()),
		_signed(other.getSigned()) {}

AForm::~AForm(void) {}

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
	return "Grade is too high";
}

const char * AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

const char * AForm::FormNotSignedException::what() const throw()
{
	return "Form is not signed";
}

std::ostream & operator<<(std::ostream & os, AForm const & form)
{
	os << "Form:" << form.getName() << ":";
	form.getSigned() ? os << "Signed" << "/" : os << "Unsigned" << "/";
	os << "GTS-" << form.getGradeToSign() << "/";
	os << "GTE-" << form.getGradeToExecute();
	return os;
}

void AForm::checkRequirementsToExecute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw FormNotSignedException();
	else if (executor.getGrade() > this->_gradeToExecute)
		throw GradeTooLowException();
}
