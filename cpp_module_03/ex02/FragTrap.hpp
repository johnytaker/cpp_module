/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 00:10:40 by iugolin           #+#    #+#             */
/*   Updated: 2023/08/29 00:41:56 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAPRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string const name);
		FragTrap(FragTrap & other);
		~FragTrap(void);

		FragTrap & operator=(FragTrap const & rhs);
		void highFivesGuys(void);
};

 #endif
