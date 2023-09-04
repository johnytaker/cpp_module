/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 22:11:16 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/03 14:48:10 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const & other);
		virtual ~WrongAnimal(void);
		void makeSound(void) const;

		std::string getType(void) const;
		WrongAnimal & operator=(WrongAnimal const & rhs);
	protected:
		std::string type;
};

#endif
