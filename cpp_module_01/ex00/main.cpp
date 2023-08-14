/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 19:06:52 by iugolin           #+#    #+#             */
/*   Updated: 2023/08/13 14:23:09 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie* tod = newZombie("Tod");
	Zombie* shaun = newZombie("Shaun");

	tod->announce();
	shaun->announce();
	delete tod;
	delete shaun;
	randomChump("Chump");

	return (0);
}
