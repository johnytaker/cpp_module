/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:09:50 by iugolin           #+#    #+#             */
/*   Updated: 2023/08/20 17:12:54 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon(void);
		const std::string &getType(void);
		void setType(std::string type);
	private:
		std::string type;
};

#endif
