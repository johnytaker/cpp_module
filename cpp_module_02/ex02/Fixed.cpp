/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:21:42 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/13 12:45:10 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed() : fixedPoint(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const num) : fixedPoint(num << fractionalBits)
{
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const num) : fixedPoint(roundf(num * (1 << fractionalBits)))
{
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	fixedPoint = rhs.getRawBits();
	return *this;
}

float Fixed::toFloat(void) const
{
	return ((float)fixedPoint / (float)(1 << fractionalBits));
}

int Fixed::toInt(void) const
{
	return (fixedPoint >> fractionalBits);
}

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	fixedPoint = raw;
}

bool Fixed::operator>(Fixed const & rhs) const
{
	return (fixedPoint > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const & rhs) const
{
	return (fixedPoint < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const & rhs) const
{
	return (fixedPoint >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const & rhs) const
{
	return (fixedPoint <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const & rhs) const
{
	return (fixedPoint == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const & rhs) const
{
	return (fixedPoint != rhs.getRawBits());
}

Fixed & Fixed::operator+(Fixed const & rhs)
{
	this->setRawBits(fixedPoint + rhs.getRawBits());
	return *this;
}

Fixed & Fixed::operator-(Fixed const & rhs)
{
	this->setRawBits(fixedPoint - rhs.getRawBits());
	return *this;
}

Fixed & Fixed::operator*(Fixed const & rhs)
{
	this->setRawBits((fixedPoint * rhs.getRawBits()) / (1 << fractionalBits));
	return *this;
}

Fixed & Fixed::operator/(Fixed const & rhs)
{
	this->setRawBits((fixedPoint * (1 << fractionalBits)) / rhs.getRawBits());
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	++(*this);
	return temp;
}

Fixed & Fixed::operator++(void)
{
	fixedPoint++;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	--(*this);
	return temp;
}

Fixed & Fixed::operator--(void)
{
	fixedPoint--;
	return *this;
}

Fixed & Fixed::min(Fixed & left, Fixed & right)
{
	return (left > right ? right : left);
}

const Fixed & Fixed::min(Fixed const & left, Fixed const & right)
{
	return (left > right ? right : left);
}

Fixed & Fixed::max(Fixed & left, Fixed & right)
{
	return (left > right ? left : right);
}

const Fixed & Fixed::max(Fixed const & left, Fixed const & right)
{
	return (left > right ? left : right);
}

std::ostream & operator<<(std::ostream & os, Fixed const & i)
{
	os << i.toFloat();
	return os;
}
