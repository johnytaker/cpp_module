/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:08:03 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/14 11:53:03 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << _name <<  " constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const name) : _name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap & other)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << _name << " destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	return *this;
}

void ClapTrap::attack(const std::string & target)
{
	if (energyPoints && hitPoints)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target
		<< ", causing " << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
	else if (!energyPoints)
		std::cout << "ClapTrap " << _name << " doesn't have enough energy points to attack!" << std::endl;
	else
		std::cout << "ClapTrap " << _name << " can't attack, it has no hit points left!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints)
	{
		std::cout << "ClapTrap " << _name << " was attacked and took " << amount << " points of damage!" << std::endl;
		if (hitPoints > amount)
			hitPoints -= amount;
		else
		{
			hitPoints = 0;
			std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
		}
	}
	else
		std::cout << "ClapTrap " << _name << " is dead already!" << std::endl;


}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints && hitPoints)
	{
		std::cout << "ClapTrap " << _name << " repairs itself and gets " << amount << " hit points back!" << std::endl;
		energyPoints--;
		hitPoints += amount;
		if (hitPoints > 10)
			hitPoints = 10;
	}
	else if (!energyPoints)
		std::cout << "ClapTrap " << _name << " doesn't have enough energy points to repair!" << std::endl;
	else
		std::cout << "ClapTrap " << _name << " can't repair, it has no hit points left!" << std::endl;
}
