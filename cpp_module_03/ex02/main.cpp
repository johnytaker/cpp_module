/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:12:37 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/14 13:19:08 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ClapTrap.hpp"
// #include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main (void)
{
	FragTrap cody("Cody");

	cody.highFivesGuys();
	cody.attack("Somebody");
	cody.takeDamage(90);
	cody.beRepaired(50);
	cody.takeDamage(100);

	return (0);
}
