/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 22:11:16 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/04 23:18:15 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>
# include <iostream>
# include "Brain.hpp"

class AAnimal
{
	public:
		AAnimal(void);
		AAnimal(AAnimal const & other);
		virtual ~AAnimal(void);
		virtual void makeSound(void) const = 0;

		std::string getType(void) const;
		AAnimal & operator=(AAnimal const & rhs);
	protected:
		std::string type;
};

#endif
