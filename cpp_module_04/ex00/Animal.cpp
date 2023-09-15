/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 22:28:04 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/15 15:27:46 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(Animal const & other)
{
	std::cout << "Copy Animal constructor called" << std::endl;
	*this = other;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}
void Animal::makeSound(void) const
{
	std::cout << "It's Animal sound!" << std::endl;
}

std::string Animal::getType(void) const
{
	return this->type;
}

Animal & Animal::operator=(Animal const & rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}
