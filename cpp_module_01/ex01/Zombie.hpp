/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 19:48:39 by iugolin           #+#    #+#             */
/*   Updated: 2023/08/20 17:00:36 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	public:
		Zombie(void);
		~Zombie(void);
		void setName(std::string Name);
		void announce(void);
	private:
		std::string name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
