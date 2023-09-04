/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:13:04 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/03 16:50:44 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "Default WrongCat constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & other) : WrongAnimal(other)
{
	std::cout << "Copy WrongCat constructor called" << std::endl;
	*this = other;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "meow mooo woof" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	this->type = rhs.type;
	return *this;
}
