/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:18:41 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/04 20:49:10 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(Brain const & other);
		~Brain(void);

		Brain & operator=(Brain const & rhs);
	private:
		std::string ideas[100];
};

#endif
