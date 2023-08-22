/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 12:16:07 by iugolin           #+#    #+#             */
/*   Updated: 2023/08/20 17:05:25 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
	{
		std::cout << "Incorrect number of zombies!" << std::endl;
		return (NULL);
	}
	Zombie* zombies = new Zombie[N];

	for (int i = 0; i < N; i++)
		zombies[i].setName(name);
	return zombies;
}
