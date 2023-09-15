/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:36:36 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/15 16:37:00 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "Thought";
}
Brain::Brain(Brain const & other)
{
	std::cout << "Copy Brain constructor called" << std::endl;
	*this = other;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain & Brain::operator=(Brain const & rhs)
{
	// std::cout << "Brain Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		for (size_t i = 0; i < 100; i++)
			this->ideas[i] = rhs.ideas[i];
	}
	return *this;
}
