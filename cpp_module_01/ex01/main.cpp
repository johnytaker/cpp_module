/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 19:06:52 by iugolin           #+#    #+#             */
/*   Updated: 2023/08/13 14:26:32 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		std::cout << "USAGE: ./Moar_brainz [number_of_zombies] [name]" << std::endl;
		return (1);
	}
	int numberOfZombies = atoi(argv[1]);
	std::string zombieName = argv[2];

	Zombie *horde = zombieHorde(numberOfZombies, zombieName);
	if (horde)
	{
		for (int i; i < numberOfZombies; i++)
			horde[i].announce();
		delete [] horde;
	}
	return (0);
}
