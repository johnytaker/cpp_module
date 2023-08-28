/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:12:37 by iugolin           #+#    #+#             */
/*   Updated: 2023/08/28 18:25:36 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void)
{
	ClapTrap *tmp1 = new ClapTrap("Spring");
	ClapTrap *tmp2 = new ClapTrap();

	tmp1->attack("Somebody");
	tmp2->takeDamage(5);
	tmp2->beRepaired(4);
	tmp1->takeDamage(10);
	tmp1->attack("Stranger");
	tmp1->beRepaired(10);
	tmp1->takeDamage(1);

	delete tmp1;
	delete tmp2;
	return (0);
}
