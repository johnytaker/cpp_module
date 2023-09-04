/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 22:28:04 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/04 23:22:08 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "Default AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const & other)
{
	std::cout << "Copy AAnimal constructor called" << std::endl;
	*this = other;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructor called" << std::endl;
}

// void AAnimal::makeSound(void) const
// {
// 	std::cout << "It's AAnimal sound!" << std::endl;
// }

std::string AAnimal::getType(void) const
{
	return this->type;
}

AAnimal & AAnimal::operator=(AAnimal const & rhs)
{
	this->type = rhs.type;
	return *this;
}
