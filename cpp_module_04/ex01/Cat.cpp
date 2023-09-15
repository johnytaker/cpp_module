/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:13:04 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/15 18:50:42 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(Cat const & other) : Animal(other)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	this->brain = new Brain(*(other.brain));
	std::cout << "Brain address: " << this->brain << std::endl;
	std::cout << "Brain address: " << other.brain << std::endl;
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
	// std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		if (this->brain)
			delete this->brain;
		this->brain = new Brain();
		*this->brain = *rhs.brain;
		// this->brain = rhs.brain;
		this->type = rhs.getType();
	}
	return *this;
}
