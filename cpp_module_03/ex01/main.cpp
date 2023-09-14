/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:12:37 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/14 12:57:36 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main (void)
{
	ScavTrap robot("Body");

	robot.guardGate();
	for (int i = 0; i < 51; i++)
		robot.attack("Somebody");
	robot.takeDamage(99);
	robot.beRepaired(99);
	robot.takeDamage(1);
	
	return (0);
}
