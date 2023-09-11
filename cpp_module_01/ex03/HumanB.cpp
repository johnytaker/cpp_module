/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:18:45 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/08 17:59:29 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
	this->weapon = NULL;
}

HumanB::~HumanB(void) {}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
void HumanB::attack(void)
{
	if (this->weapon)
		std::cout << this->name + " attacks with their " + this->weapon->getType() << std::endl;
	else
		std::cout << this->name + " hasn't any weapon. He can't attack" << std::endl;
}
