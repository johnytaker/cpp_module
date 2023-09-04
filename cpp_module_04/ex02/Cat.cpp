/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:13:04 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/04 23:23:49 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(Cat const & other) : AAnimal(other)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	this->brain = new Brain(* other.brain);
	this->type = other.getType();
}

Cat::~Cat(void)
{
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "meow meow meow" << std::endl;
}

Cat & Cat::operator=(Cat const & rhs)
{
	// this->type = rhs.getType();
	// this->brain = rhs.brain;
	// return *this;

	if (this == &rhs)
		return *this;
	if (rhs.brain != NULL)
		this->brain = new Brain(* rhs.brain);
	else
		this->brain = NULL;
	this->type = rhs.getType();
	return *this;
}
