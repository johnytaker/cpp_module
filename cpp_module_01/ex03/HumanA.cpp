/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:04:02 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/11 13:17:52 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon & weapon) : name(name), weapon(weapon) {}

HumanA::~HumanA(void) {}

void HumanA::attack(void)
{
	std::cout << this->name + " attacks with their " + this->weapon.getType() << std::endl;
}
