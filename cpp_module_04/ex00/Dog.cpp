/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:13:04 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/15 15:41:03 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog const & other) : Animal(other)
{
	std::cout << "Copy Dog constructor called" << std::endl;
	*this = other;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "woof woof woof bow wow" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}
