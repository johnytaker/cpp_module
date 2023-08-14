/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 19:48:39 by iugolin           #+#    #+#             */
/*   Updated: 2023/08/14 13:41:25 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(std::string Name);
		~Zombie(void);
		void announce(void);
};

Zombie* newZombie(std::string Name);
void randomChump(std::string Name);

#endif
