/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:08:53 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/18 15:40:02 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const & other);
		virtual ~Cat(void);
		void makeSound(void) const;

		Cat & operator=(Cat const & rhs);
		Brain * getBrain(void) const;
	private:
		Brain * brain;
};

#endif
