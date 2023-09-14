/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:12:37 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/14 12:47:04 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void)
{
	ClapTrap *tmp1 = new ClapTrap("Body");

	tmp1->attack("Somebody");
	tmp1->takeDamage(7);
	tmp1->beRepaired(5);
	tmp1->takeDamage(10);
	tmp1->attack("Stranger");
	
	delete tmp1;
	
	std::cout << std::endl;
	
	ClapTrap tmp2;
	
	for (int i = 0; i < 5; i++)
		tmp2.attack("Dude");
	for (int i = 0; i < 5; i++)
		tmp2.beRepaired(1);

	tmp2.beRepaired(1);
	tmp2.attack("Dude");
	return (0);
}
