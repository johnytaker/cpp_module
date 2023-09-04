/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 22:11:16 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/03 16:58:50 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>
# include "Brain.hpp"

class Animal
{
	public:
		Animal(void);
		Animal(Animal const & other);
		virtual ~Animal(void);
		virtual void makeSound(void) const;

		std::string getType(void) const;
		Animal & operator=(Animal const & rhs);
	protected:
		std::string type;
};

#endif
