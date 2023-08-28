/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:12:37 by iugolin           #+#    #+#             */
/*   Updated: 2023/08/28 20:17:59 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main (void)
{
	ScavTrap first("Spring");
	first.guardGate();
	first.attack("Somebody");
	first.takeDamage(70);

	ScavTrap second("Summer");
	second.takeDamage(99);
	second.beRepaired(100);
	return (0);
}
