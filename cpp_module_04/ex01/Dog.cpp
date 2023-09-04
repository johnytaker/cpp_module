/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:13:04 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/04 20:39:42 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(Dog const & other) : Animal(other)
{
	std::cout << "Copy Dog constructor called" << std::endl;
	this->brain = new Brain(*other.brain);
	this->type = other.getType();
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "woof woof woof bow wow" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
	// this->type = rhs.getType();
	// this->brain = rhs.brain;
	// return *this;
	if (this == &rhs)
		return *this;
	if (rhs.brain != NULL)
		this->brain = new Brain(*rhs.brain);
	else
		this->brain = NULL;
	this->type = rhs.getType();
	return *this;
}
