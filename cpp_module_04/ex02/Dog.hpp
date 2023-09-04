/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:08:53 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/04 23:26:21 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"

class Dog : public AAnimal
{
	public:
		Dog(void);
		Dog(Dog const & other);
		~Dog(void);
		void makeSound(void) const;

		Dog & operator=(Dog const & rhs);
	private:
		Brain * brain;
};

#endif
