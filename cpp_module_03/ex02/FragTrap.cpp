/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 00:42:50 by iugolin           #+#    #+#             */
/*   Updated: 2023/08/29 12:27:16 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->_name = "Default";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string const name)
{
	this->_name = name;;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "FragTrap " << _name << " constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap & other)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = other;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << _name << " destructor called" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " says: 'High Five!'" << std::endl;
}
